//  6. Distance Traveled
//
//  The distance a vehicle travels can be calculated as follows:
//          distance = speed * time
//
//  For example, if a train travels 40 miles per hour for 3 hours, the distance traveled is 120 miles.
//  Write a program that asks the user for the speed of a vehicle (in miles per hour) and how
//  many hours it has traveled. The program should then use a loop to display the distance the
//  vehicle has traveled for each hour of that time period. Here is an example of the output:
//
//      What is the speed of the vehicle in mph? 40
//      How many hours has it traveled? 3
//
//          Hour        Distance Traveled
//      --------------------------------
//          1           40
//          2           80
//          3           120
//
//
//  Input Validation: Do not accept a negative number for speed and do not accept any
//  value less than 1 for time traveled.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int speed, time;
    
    cout << "Speed of the vehicle in mph: ";
    cin >> speed;
    while (speed < 0)
    {
        cout << "\nSpeed can't be negative, enter valid number: ";
        cin >> speed;
    }
    
    cout << "Hours traveled: ";
    cin >> time;
    while (time < 1)
    {
        cout << "\nMust have at least 1 hour, enter valid number: ";
        cin >> time;
    }
    
    cout << "\n\n\tHour\tDistance\n"; 
    cout << "\t----------------\n";
    for (int i = 1; i <= time; i++)
    {
        cout << "\t" << setw(2) << i << " \t\t" << setw(5) << right << speed << endl;
        speed *= 2;
    }
    
    cout << "\n\n";
    return 0;
}
