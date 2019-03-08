//    7.
//        Time Calculator
//
//    Write a program that asks the user to enter a number of seconds.
//
//    • There are 60 seconds in a minute. If the number of seconds entered by the user is
//    greater than or equal to 60, the program should display the number of minutes in
//    that many seconds.
//
//    • There are 3,600 seconds in an hour. If the number of seconds entered by the user is
//    greater than or equal to 3,600, the program should display the number of hours in
//    that many seconds.
//
//    • There are 86,400 seconds in a day. If the number of seconds entered by the user is
//    greater than or equal to 86,400, the program should display the number of days in
//    that many seconds.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int days, hours, mins, secs;
    
    days = hours = mins = 0;
    
    cout << "Enter seconds: ";
    cin >> secs;
    cout << endl;
    
    if (secs >= 86400){
        days = secs / 86400;
        secs -= days * 86400;
    }
    if (secs >= 3600){
        hours = secs / 3600;
        secs -= hours * 3600;
    }
    if (secs >= 60){
        mins = secs / 60;
        secs -= mins * 60;
    }
    
    cout << setw(10) << left << "Days: " << setw(7) << right << days << endl;
    cout << setw(10) << left << "Hours: " << setw(7) << right << hours << endl;
    cout << setw(10) << left << "Minutes: " << setw(7) << right << mins << endl;
    cout << setw(10) << left << "Seconds: " << setw(7) << right << secs << endl;
    
    
    cout << "\n\n";
    
    return 0;
}
