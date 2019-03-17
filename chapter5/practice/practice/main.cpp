//
//  main.cpp
//  practice
//
//  Created by Brian Lobo-Amaro on 3/12/19.
//  Copyright © 2019 Brian Lobo-Amaro. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int answer;
    
    cout << "Enter amount of x's: ";
    cin >> answer;
    
    for (int i = 0; i <= answer; i++)
    {
        for (int x = 0; x < i; x++)
            cout << "+";
        cout << endl;
    }
    
    for (int i = 0; i <= answer; i++)
    {
        for (int x = (answer - i); x != 0; x--)
            cout << "+";
        cout << endl;
    }
    
    
//    while (answer > 15 || answer < 1)
//    {
//        cout << "\nNumber must be > 0 and < 15\n";
//        cout << "Enter amount of x's: ";
//        cin >> answer;
//    }
    
//    for (int i = 0; i < answer; i++)
//    {
//        for (int i = 0; i < (answer); i++)
//            cout << "x";
//        cout << endl;
//    }

    return 0;
}


