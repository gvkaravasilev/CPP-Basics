#include <iostream>

using namespace std;

int main()
{
    int day, month, year;

    cin >> day >> month >> year;

    int sumYearDigits = 0;
    int sumMonthDigits = 0;
    int sumDayDigits = 0;

    while(year != 0)
    {
        int lastDigit = year % 10;
        sumYearDigits += lastDigit;
        year /= 10;
    }
    if(month > 9 )
    {
        while(month != 0)
        {
            int lastDigit = month % 10;
            sumMonthDigits += lastDigit;
            month /= 10;
        }
    }else
    {
        sumMonthDigits = month;
    }
    if(day > 9)
    {
        while(day != 0)
        {
            int lastDigit = month % 10;
            sumDayDigits += lastDigit;
            day /= 10;
        }
    }else
    {
        sumDayDigits = day;
    }
    int totalSum = sumDayDigits + sumMonthDigits + sumYearDigits;
    int finalSum = 0;


    if(totalSum > 9 && totalSum <= 99)
    {
        while(totalSum != 0)
        {
            int lastDigit = totalSum % 10;
            finalSum += lastDigit;
            totalSum /= 10;
        }
        cout << finalSum;
    }else
    {
        cout << totalSum;
    }


}
