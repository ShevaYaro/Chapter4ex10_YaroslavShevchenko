/*
Tite Chapter 4 Exercise 10 - Days in a Month
File name:Chapter4ex10_Yaroslav_Shevchenko.cpp
Programmer: Yaroslav Shevchenko
Date: 10/22/2024
Requirements:

Write a program that asks the user to enter the month (letting the user enter an integer in the range of 1 through 12) and the year.
The program should then display the number of days in that month. Use the following criteria to identify leap years:

Determine whether the year is divisible by 100. If it is, then it is a leap year if and only if it is divisible by 400. For example, 2000 is a leap year but 2100 is not.
 If the year is not divisible by 100, then it is a leap year if and only if it is divisible by 4. For example, 2008 is a leap year but 2009 is not.
Here is a sample run of the program:
Enter a month (1–12): 2 [Enter]

Enter a year: 2008 [Enter]

29 days

*/

#include <iostream>
using namespace std;


int main()
{
    int m;
    int y;
    int d;
    bool isLeapYear = false;


    cout << "Enter a month (1 to 12): " << endl;
    cin >> m;
    cout << "Enter a year: " << endl;
    cin >> y;

    //is leap year?
    if (y % 400 == 0) {
        isLeapYear = true;
    }
    else if (y % 100 != 0) {
        if (y % 4 == 0) {
            isLeapYear = true;
        }
        
    }

    // days for non leapYear
    if (!isLeapYear) {
        if (m % 2 != 0 && m<=7) {
            d = 31;
        }
        else if (m % 2 == 0 && m <= 7) {
            if (m==2) {
                d = 28;
            }
            else d = 30;
        }
        else if (m % 2 != 0 && m > 7) {
            d = 30;
        }
        else if (m % 2 == 0 && m > 7) {
            d = 31;
        }
        
    }
    //days for the leapYear
    else if (isLeapYear) {
        if (m % 2 != 0 && m <= 7) {
            d = 31;
        }
        else if (m % 2 == 0 && m <= 7) {
            if (m == 2) {
                d = 29;
            }
            else d = 30;
        }

        else if (m % 2 != 0 && m > 7) {
            d = 30;
        }
        else if (m % 2 == 0 && m > 7) {
            d = 31;
        }

    }
    cout << d << " days" << endl;
    

}

