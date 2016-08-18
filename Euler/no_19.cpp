//
// Created by zhaoxiaodong on 16-8-18.
//
/*
Counting Sundays
Problem 19

You are given the following information, but you may prefer to do some research for yourself.

1 Jan 1900 was a Monday.
Thirty days has September,
April, June and November.
All the rest have thirty-one,
Saving February alone,
Which has twenty-eight, rain or shine.
And on leap years, twenty-nine.
A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.
How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?

 */
#include <iostream>

using namespace std;

void euler_19() {
    int result = 0;
    int carry = 0; // last mouth's last day's day, 1899-12-31 is Sunday(0)
    int mouth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int year = 1900; year <= 2000; ++year) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            mouth[2] = 29;
        else
            mouth[2] = 28;
        for (int m = 1; m <= 12; m++) {
            if (carry + 1 == 7 && year > 1900)
                result++;
            carry = (carry + mouth[m]) % 7;
        }
    }
    cout << result;
}