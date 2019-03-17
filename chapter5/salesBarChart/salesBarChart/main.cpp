#include <iostream>
using namespace std;

int main() {
    // Store1, store2, etc...
    int s1, s2, s3, s4, s5;
    
    cout << "Enter today's sales for store 1: ";
    cin >> s1;
    s1 /= 100;
    cout << "Enter today's sales for store 2: ";
    cin >> s2;
    s2 /= 100;
    cout << "Enter today's sales for store 3: ";
    cin >> s3;
    s3 /= 100;
    cout << "Enter today's sales for store 4: ";
    cin >> s4;
    s4 /= 100;
    cout << "Enter today's sales for store 5: ";
    cin >> s5;
    s5 /= 100;
    
    cout << "\n\n\tSALES BAR CHART\n";
    cout << "\t(Each * = $100)\n";
    
    cout << "Store 1: ";
    for (int i = 0; i < s1; i++)
        cout << "*";
    cout << "\nStore 2: ";
    for (int i = 0; i < s2; i++)
        cout << "*";
    cout << "\nStore 3: ";
    for (int i = 0; i < s3; i++)
        cout << "*";
    cout << "\nStore 4: ";
    for (int i = 0; i < s4; i++)
        cout << "*";
    cout << "\nStore 5: ";
    for (int i = 0; i < s5; i++)
        cout << "*";
    cout << "\n\n";
    
    return 0;
}
