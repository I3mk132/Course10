/// ====================================== ( Project 2 ) ==============================================
/// Date class

#include <iostream>
#include "clsDate.h"

using namespace std;

int main(){
//    clsDate Date1;
//    Date1.Print();

    clsDate Date("31/1/2022");
    Date.Print();

//    clsDate Date3(20, 12, 2022);
//    Date3.Print();
//
//    clsDate Date4(250,2022);
//    Date4.Print();

    // Date3.PrintYearCalender();
    // cout << Date.isValidDate() << endl;
    //

    // cout << "My Age In Days:" <<
    //     clsDate::CalculateMyAgeInDays(  clsDate(29, 6, 2024) );
    //You can try any method at your own..
    // cout << "Date before decreasing: ";
    // Date1.Print();
    // cout << endl;
    // Date1.DecreaseDateByXDays(365);
    // cout << "Date after decreasing : ";
    // Date1.Print();
    cout << "-------------------------------------------\n\n";
    Date.setDay(25);
    Date.setMonth(11);
    Date.setYear(1980);
    Date.Print();
    cout << "\n\n";

    Date = clsDate::GetSystemDate();
    Date.Print();
    cout << "\n\n";

    cout << Date.isLeapYear();;
    cout << "\n\n";

    cout << Date.NumberOfSecondsInYear();
    cout << "\n\n";

    cout << Date.NumberOfSecondsInMonth();
    cout << "\n\n";

    cout << clsDate::GetDayName(Date.DayOfWeekOrder());
    cout << "\n\n";

    cout << clsDate::GetDayShortName(Date.DayOfWeekOrder());
    cout << "\n\n";

    cout << Date.GetMonthName();
    cout << "\n\n";

    cout << Date.GetMonthShortName();
    cout << "\n\n";

    clsDate Date2;
    cout << Date.isDateBeforeDate2(Date2);
    cout << "\n\n";

    cout << Date.isDateEqualDate2(Date2);
    cout << "\n\n";

    cout << Date.isDateAfterDate2(Date2);
    cout << "\n\n";

    cout << Date.DayOfWeekOrder();
    cout << "\n\n";

    cout << Date.GetTodayCountInYear();
    cout << "\n\n";

    cout << Date.isLastDayInMonth();
    cout << "\n\n";

    cout << Date.isLastMonthInYear();
    cout << "\n\n";

    cout << "==================\n";
    Date.Print();
    cout << "===================\n\n";

    Date.IncreaseDayByOne();
    Date.Print();
    cout << "\n\n";

    Date.IncreaseDateByXDays(5);
    Date.Print();
    cout << "\n\n";

    Date.IncreaseDateByOneWeek();
    Date.Print();
    cout << "\n\n";

    Date.IncreaseDateByXWeeks(5);
    Date.Print();
    cout << "\n\n";

    Date.IncreaseDateByOneMonth();
    Date.Print();
    cout << "\n\n";

    Date.IncreaseDateByXMonths(5);
    Date.Print();
    cout << "\n\n";

    Date.IncreaseDateByOneYear();
    Date.Print();
    cout << "\n\n";

    Date.IncreaseDateByXYears(5);
    Date.Print();
    cout << "\n\n";

    Date.IncreaseDateByOneDecade();
    Date.Print();
    cout << "\n\n";

    Date.IncreaseDateByXDecades(5);
    Date.Print();
    cout << "\n\n";

    Date.IncreaseDateByOneCentury();
    Date.Print();
    cout << "\n\n";

    Date.IncreaseDateByOneMillennium();
    Date.Print();
    cout << "\n\n";

    cout << "======================\n\n";

    Date.DecreaseDateByOneDay();
    Date.Print();
    cout << "\n\n";

    Date.DecreaseDateByXDays(5);
    Date.Print();
    cout << "\n\n";

    Date.DecreaseDateByOneWeek();
    Date.Print();
    cout << "\n\n";

    Date.DecreaseDateByXWeeks(5);
    Date.Print();
    cout << "\n\n";

    Date.DecreaseDateByOneMonth();
    Date.Print();
    cout << "\n\n";

    Date.DecreaseDateByXMonths(5);
    Date.Print();
    cout << "\n\n";

    Date.DecreaseDateByOneYear();
    Date.Print();
    cout << "\n\n";

    Date.DecreaseDateByXYears(5);
    Date.Print();
    cout << "\n\n";

    Date.DecreaseDateByOneDecades();
    Date.Print();
    cout << "\n\n";

    Date.DecreaseDateByXDecades(5);
    Date.Print();
    cout << "\n\n";

    Date.DecreaseDateByOneCentury();
    Date.Print();
    cout << "\n\n";

    Date.DecreaseDateByOneMillennium();
    Date.Print();
    cout << "\n\n";

    cout << "===================\n";

    Date.Print();

    cout << Date.GetUserAge();
    cout << "\n\n";

    cout << Date.GetDifferenceCount(Date2, true);
    cout << "\n\n";

    cout << Date.CalculateMyAgeInDays();
    cout << "\n\n";

    cout << Date.isEndOfWeek();
    cout << "\n\n";

    cout << Date.isWeekEnd();
    cout << "\n\n";

    cout << Date.isWorkDay();
    cout << "\n\n";

    cout << Date.DaysUntilTheEndOfWeek();
    cout << "\n\n";

    cout << Date.DaysUntilTheEndOfMonth();
    cout << "\n\n";

    cout << Date.DaysUntilTheEndOfYear();
    cout << "\n\n";

    cout << Date.CalculateWorkDays(clsDate(13, 12, 2024));
    cout << "\n\n";

    cout << Date.CalculateVacationDays(clsDate(13, 12, 2024));
    cout << "\n\n";

    clsDate::Print(Date.CalculateVacationReturnDate(30));
    cout << "\n\n";

    cout << Date.ActualVacationDays(clsDate(13, 12, 2024));
    cout << "\n\n";

    cout << clsDate::GetDateCompare(Date.CompareDates(clsDate(13, 12, 2024)));
    cout << "\n\n";

    cout << Date.isValidDate();
    cout << "\n\n";

    clsDate::Print(clsDate::StringToDate("24/5/2002"));
    cout << "\n\n";

    cout << Date.DateToString();
    cout << "\n\n";

    cout << Date.FormatDate("dd-mm-yyyy");
    cout << "\n\n";

    cout << Date.PrintDate();
    cout << "\n\n";

    Date.PrintMonthCalender();
    cout << "\n\n";

    Date.PrintYearCalender();
    cout << "\n\n";

    Date.Print();
    cout << endl << endl;

    return 0;
};
