//    16.
//        Running the Race
//
//
//            Write a program that asks for the names of three runners and the time it took each
//        of them to finish a race. The program should display who came in first, second, and
//        third place.
//
//            Input Validation: Only accept positive numbers for the times.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string runner1, runner2, runner3, first, second, third;
    float runTime1, runTime2, runTime3;
    
    // First Runner
    cout << "\n\n";
    cout << "Fist runner: ";
    getline(cin, runner1);
    cout << "Time for " << runner1 << " take to finish the race: ";
    cin  >> runTime1;
    if (runTime1 < 0)
        cout << "\nError: Time can't be negative.\n\n";
    else
    {
        cin.ignore();
        // Second Runner
        cout << "What is the name of the second runner? ";
        getline(cin, runner2);
        cout << "Time for " << runner2 << " take to finish the race: ";
        cin  >> runTime2;
        if (runTime2 < 0)
            cout << "\nError: Time can't be negative.\n\n";
        else
        {
            cin.ignore();
            // Third Runner
            cout << "What is the name of the third runner? ";
            getline(cin, runner3);
            cout << "Time for " << runner3 << " take to finish the race: ";
            cin  >> runTime3;
            if (runTime3 < 0)
                cout << "\nError: Time can't be negative.\n\n";
            else
            {
                if (runTime1 > 0 && runTime2 > 0 && runTime3 > 0)
                {
                    if (runTime1 < runTime2 && runTime1 < runTime3)
                    {
                        if (runTime2 < runTime3)
                        {
                            first = runner1;
                            second = runner2;
                            third = runner3;
                        }
                        else
                        {
                            first = runner1;
                            second = runner3;
                            third = runner2;
                        }
                    }
                    else if (runTime2 < runTime1 && runTime2 < runTime3)
                    {
                        if (runTime1 < runTime3)
                        {
                            first = runner2;
                            second = runner1;
                            third = runner3;
                        }
                        else
                        {
                            first = runner2;
                            second = runner3;
                            third = runner1;
                        }
                    }
                    else
                    {
                        if (runTime1 < runTime2)
                        {
                            first = runner3;
                            second = runner1;
                            third = runner2;
                        }
                        else
                        {
                            first = runner3;
                            second = runner2;
                            third = runner1;
                        }
                    }
                }
                cout << setw(11) << left << "\n\tFirst: " << first << endl;
                cout << setw(10) << left << "\tSecond: " << second << endl;
                cout << setw(10) << left << "\tThird: " << third << "\n\n";
            }
        }
    }
    return 0;
}
