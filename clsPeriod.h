#pragma once

#include <iostream>
#include "clsDate.h"
using namespace std;

class clsPeriod {

public:
    clsDate StartDate;
    clsDate EndDate;

    clsPeriod(clsDate StartDate, clsDate EndDate){
        this->StartDate = StartDate;
        this->EndDate = EndDate;
    }
    clsPeriod(){

    }


    static clsPeriod ReadPeriod() {
        clsPeriod Period;
        std::cout << "\nEnter Start Date:\n";
        Period.StartDate = clsDate::ReadDate();
        std::cout << "\nEnter EndDate: \n";
        Period.EndDate = clsDate::ReadDate();
        return Period;
    }

    // ==============================================================================================

    static bool isOverlapPeriods(clsPeriod Period1, clsPeriod Period2) {
        if (
                clsDate::CompareDates(Period1.EndDate, Period2.StartDate) == clsDate::enDateCompare::Before
                ||
                clsDate::CompareDates(Period1.StartDate, Period2.EndDate) == clsDate::enDateCompare::After
                ) {
            return false;
        }
        else {
            return true;
        }
    }
    bool isOverlapPeriods(clsPeriod Period2){
        return isOverlapPeriods(*this, Period2);
    }

    // ================================================================================================

    static short GetPeriodLength(clsPeriod Period, bool IncludingEndDay = false) {
        return clsDate::GetDifferenceCount(Period.StartDate, Period.EndDate, IncludingEndDay);
    }
    short GetPeriodLength(bool IncludingEndDay = false){
        return GetPeriodLength(*this, IncludingEndDay);
    }

    // =================================================================================================

    static bool isDateWithinPeriod(clsPeriod Period, clsDate Date) {
        return (
                clsDate::CompareDates(Period.StartDate, Date) == clsDate::enDateCompare::Before
                &&
                clsDate::CompareDates(Period.EndDate, Date) == clsDate::enDateCompare::After
        );
    }
    bool isDateWithinPeriod(clsDate Date) {
        return isDateWithinPeriod(*this, Date);
    }

    // ===================================================================================================

    static short GetOverlapDaysCount(clsPeriod Period1, clsPeriod Period2) {
        short Period1Length = GetPeriodLength(Period1, true);
        short Period2Length = GetPeriodLength(Period2, true);

        if (!isOverlapPeriods(Period1, Period2)) {
            return 0;
        }

        short OverlapCount = 0;

        // Date iterator
        clsDate CurrentDate;

        if (Period1Length < Period2Length) {
            CurrentDate = Period1.StartDate;
            while (clsDate::isDate1BeforeDate2(CurrentDate, Period1.EndDate)) {
                if (isDateWithinPeriod(Period2, CurrentDate)) {
                    OverlapCount++;
                }
                clsDate::IncreaseDayByOne(CurrentDate);
            }
        }
        else {
            CurrentDate = Period2.StartDate;
            while (clsDate::isDate1BeforeDate2(CurrentDate, Period2.EndDate)) {
                if (isDateWithinPeriod(Period1, CurrentDate)) {
                    OverlapCount++;
                }
                clsDate::IncreaseDayByOne(CurrentDate);
            }

        }

        return OverlapCount;
    }
    short GetOverlapDaysCount(clsPeriod Period2){
        return GetOverlapDaysCount(*this, Period2);
    }

    // ============================================================================================

    static void Print(clsPeriod Period){
        cout << "Period Start: ";
        Period.StartDate.Print();

        cout << "Period End: ";
        Period.EndDate.Print();
    }
    void Print(){
        Print(*this);
    }
};