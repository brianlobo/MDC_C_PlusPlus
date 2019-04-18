#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 5;
    int sum;
    // int score[] = {90, 75, 80, 100, 95};
    int scores[SIZE];
    string students[SIZE];
    
    
    sum = 0;
    
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter student #"<< i+1 << " name: ";
        cin >> students[i];
        cout << "Enter score for " << students[i] << ": ";
        cin >> scores[i];
        sum += scores[i];
    }
    
    
    for (int val : scores)
    {
        cout << val << endl;
    }
    
    cout << "Sum is: " << sum << endl;
    cout << "Average is: " << float(sum/SIZE) << endl;
    
    return 0;
}
