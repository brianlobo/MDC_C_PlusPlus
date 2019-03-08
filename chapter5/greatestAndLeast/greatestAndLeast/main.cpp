#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int counter, total, userNum, biggest, smallest;
    float avg;
    
    total = 0;
    counter = 0;
    
    cout << "Enter your integers.\n(Type \"-99\" to quit)\n : ";
    cin >> userNum;
    smallest = biggest = userNum;
    
    while (userNum != -99)
    {
        if (userNum < smallest)
            smallest = userNum;
        else if (userNum > biggest)
            biggest = userNum;
        counter++;
        total += userNum;
        cout << " : ";
        cin >> userNum;
    }
    
    avg = float(total) / float(counter);
    
    cout << "\n\n";
    cout << setw(25) << left << "\tAverage: " << setw(5) << right << avg << endl;
    cout << setw(25) << left << "\tSmallest #: " << setw(5) << right << smallest << endl;
    cout << setw(25) << left << "\tBiggest #: " << setw(5) << right << biggest << endl;
    cout << setw(25) << left << "\tAmount of #'s entered: " << setw(5) << right << counter << endl;
    cout << setw(25) << left << "\tTotal sum: " << setw(5) << right << total << "\n\n";
    
    return 0;
}
