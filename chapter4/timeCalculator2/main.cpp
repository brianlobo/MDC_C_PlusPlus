#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int days, hours, mins, secs;
    
    cout << "Enter seconds: ";
    cin >> secs;
    cout << endl;
    
    if (secs >= 86400){
        days = secs / 86400;
        cout << "Days: " << days;
    }
    else if (secs >= 3600){
        hours = secs / 3600;
        cout << "Hours: " << hours;
    }
    else if (secs >= 60){
        mins = secs / 60;
        cout << "Minutes: " << mins;
    }
    
    cout << "\n\n";
    return 0;
}
