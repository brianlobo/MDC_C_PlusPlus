//  24.
//          Using Files—Numeric Processing

//          File named numbers.txt. This file contains a long list of random
//      numbers. Copy the file to your hard drive and then write a program that opens the file,
//      reads all the numbers from the file, and calculates the following:

//          A) The number of numbers in the file
//          B) The sum of all the numbers in the file (a running total)
//          C) The average of all the numbers in the file
//
//      The program should display the number of numbers found in the file, the sum of the
//      numbers, and the average of the numbers.

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
    int  number, sum, i;
    float average;
    
    i = sum = 0;
    
    
    ifstream file;
    file.open("numbers.txt");
    cout << "\n\n\t\tReading data from the file...\n";
    cout << "\t\t=============================\n\n";
    
    while(file >> number)
    {
        i++;
        sum += number;
    }
    
    average = float(sum) / float(i);
    
    cout << setw(23) << left << "\t\tAmount of numbers: " << setw(8) << right << i << endl;
    cout << setw(23) << left << "\t\tSum of numbers: " << setw(8) << right << sum << endl;
    cout << setw(23) << left << "\t\tAverage: " << setw(8) << right << setprecision(2) << fixed << average << "\n\n\n";
    
    file.close();
    return 0;
}
