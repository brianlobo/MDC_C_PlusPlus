//    8.
//        Math Tutor
//
//            This program started in Programming Challenge 15 of Chapter 3 , and was modified
//    in Programming Challenge 9 of Chapter 4 . Modify the program again so it displays a
//    menu allowing the user to select an addition, subtraction, multiplication, or division
//    problem. The final selection on the menu should let the user quit the program. After
//    the user has finished the math problem, the program should display the menu again.
//    This process is repeated until the user chooses to quit the program.
//
//        Input Validation: If the user selects an item not on the menu, display an error message
//    and display the menu again.

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int MIN_VALUE = 1, MAX_VALUE = 999;
    float userAnswer, firstNum, secondNum;
    int choice, total, counter;
    char sign;
    unsigned int seed;
    
    while (MIN_VALUE)
    {
        counter = 1;
        seed = time(0);
        srand(seed);
        
        firstNum = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        secondNum = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        
        cout << "\nMath Tutor\n\n";
        cout << "\t1. Addition\n";
        cout << "\t2. Subtration\n";
        cout << "\t3. Multiplication\n";
        cout << "\t4. Division\n";
        cout << "\t5. Quit\n";
        cout << "\n\tYour choice: ";
        cin >> choice;
        
        if (choice < 1 || choice > 5)
            cout << "\n\nInput valid number\n\n";
        else
        {
            switch (choice)
            {
                case 1:
                    sign = '+';
                    total = firstNum + secondNum;
                    break;
                    
                case 2:
                    sign = '-';
                    total = firstNum - secondNum;
                    break;
                    
                case 3:
                    sign = 'x';
                    total = firstNum * secondNum;
                    break;
                    
                case 4:
                    sign = '/';
                    total = firstNum / secondNum;
                    break;
                    
                default:
                    return 0;
            }
            do {
                cout << "\n\tAttempts left: " << (4 - counter) << "\n\n";
                cout << "\n\t" << setw(4) << right << firstNum << endl;
                cout << "\t" << sign << setw(3) << secondNum << endl;
                cout << "\t" << "----" << endl << "\t ";
                cin >> userAnswer;
                if (userAnswer == total)
                    cout << "\n\tCorrect!\n\n" << "-----------------------";
                else
                    cout << "\n\tIncorrect\n\n" << "-----------------------";
            } while (counter++ < 3 && userAnswer != total);
        }
    }
    return 0;
}
