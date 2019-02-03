/* May Deng
CS 110B
February 1, 2019
Dave Harden
a1_1.cpp
*/

#include <iostream>
using namespace std;

int main(){
    int month;
    int day;
    int year;
    cout << "Enter a date in the format month/day/2-digit-year: ";
    cin >> month;
    cin.ignore(20, '/');
    cin >> day;
    cin.ignore(20, '/');
    cin >> year;

    if (month*day == year) {
        cout << "This is a magic date!";
    } else {
        cout << "This is not a magic date!";
    }
    return 0;
}

/*
 Enter a date in the format month/day/2-digit-year: 6/10/60
 This is a magic date!
 */