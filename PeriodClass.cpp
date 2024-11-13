/// ============================= ( Project 3 ) =================================
/// Period Class

#include <iostream>
#include "clsPeriod.h"

using namespace std;

int main(){
    clsPeriod Period1, Period2;

    Period1 = clsPeriod::ReadPeriod();
    Period2 = clsPeriod(clsDate(10, 10, 2015), clsDate(10, 10, 2023));
    cout << endl;
    cout << Period1.isOverlapPeriods(Period2);
    cout << "\n\n";

    cout << Period1.GetPeriodLength(true);
    cout << "\n\n";

    cout << Period1.isDateWithinPeriod(clsDate(12, 12, 2024));
    cout << "\n\n";

    cout << Period1.GetOverlapDaysCount(Period2);
    cout << "\n\n";

    Period1.Print();

    return 0;
}
 
