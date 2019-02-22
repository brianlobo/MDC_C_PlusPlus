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
