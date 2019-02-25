#include <iostream>
#include <string>

using namespace std;

int main() {
    float time1, time2, time3, high, mid, low;
    string name1, name2, name3;
    
    cout << "Enter name 1: ";
    getline(cin, name1);
    cout << "Enter time 1: ";
    cin >> time1;
    if (time1 < 0)
        cout << "\n\nPositive numbers only\n\n";
    else
    {
        high = time1;
        
        cout << "Enter name 2: ";
        getline(cin, name2);
        cout << "Enter time 2: ";
        cin >> time2;
        if (time2 < 0)
            cout << "\n\nPositive numbers only\n\n";
        else
        {
            if (time2 > high)
            {
                mid = high;
                high = time2;
            }
            else
                mid = time2;
                
            cout << "Enter name 3: ";
            getline(cin, name3);
            cout << "Enter time 3: ";
            cin >> time3;
            if (time3 < 0)
                cout << "\n\nPositive numbers only\n\n";
            else
            {
                if (time3 > b  )
            }
        }
    }
        
    
    return 0;
}
