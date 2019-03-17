//
//  main.cpp
//  files
//
//  Created by Brian Lobo-Amaro on 3/14/19.
//  Copyright © 2019 Brian Lobo-Amaro. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int v1, v2;
    ifstream outRecord;
    
    outRecord.open("data.txt");
    
    if (outRecord)
    {
        outRecord >> v1 >> v2;
        cout << v1 << endl << v2 << endl;
    }
    else
        cout << "File does not exist.\n\n";
    
    outRecord.close();
    return 0;
}
