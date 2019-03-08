//  23.
//      Geometry Calculator
//
//      Write a program that displays the following menu:
//      Geometry Calculator
//          1. Calculate the Area of a Circle
//          2. Calculate the Area of a Rectangle
//          3. Calculate the Area of a Triangle
//          4. Quit
//
//          Enter your choice (1-4):
//
//         If the user enters 1, the program should ask for the radius of the circle and then display
//      its area. Use the following formula:
//
//          area = πr^2
//
//          Use 3.14159 for π and the radius of the circle for r. If the user enters 2, the program
//      should ask for the length and width of the rectangle and then display the rectangle’s
//      area. Use the following formula:
//
//          area = length * width
//
//          If the user enters 3 the program should ask for the length of the triangle’s base and its
//      height, and then display its area. Use the following formula:
//
//          area = base * height * .5
//
//          If the user enters 4, the program should end.
//      Input Validation: Display an error message if the user enters a number outside the range
//      of 1 through 4 when selecting an item from the menu. Do not accept negative values
//      for the circle’s radius, the rectangle’s length or width, or the triangle’s base or height.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int choice;
    float radius, length, width, base, height, area;
    
    // Menu
    cout << "\nGeometry Calculator\n\n";
    cout << "\t1. Calculate the Area of a Circle\n";
    cout << "\t2. Calculate the Area of a Rectangle\n";
    cout << "\t3. Calculate the Area of a Triangle\n";
    cout << "\t4. Quit\n\n";
    cout << "\tEnter your choice (1-4): ";
    cin >> choice;
    
    if (choice < 1 || choice > 4)
        cout << "\n\n\tEnter valid number\n\n";
    else
    {
        switch (choice)
        {
            // Circle
            case 1:
                cout << "\n\tEnter radius: ";
                cin >> radius;
                if (radius < 0)
                {
                    cout << "\n\n\tPositive Numbers Only\n\n";
                    return 0;
                }
                else
                    area = 3.14159  * pow(radius, 2.0);
                break;
            // Rectangle
            case 2:
                cout << "\n\tEnter width: ";
                cin >> width;
                if (width < 0)
                {
                    cout << "\n\n\tPositive Numbers Only\n\n";
                    return 0;
                }
                else
                {
                    cout << "\n\tEnter length: ";
                    cin >> length;
                    if (length < 0)
                    {
                        cout << "\n\n\tPositive Numbers Only\n\n";
                        return 0;
                    }
                    else
                    {
                        area = length * width;
                    }
                }
                break;
            // Triangle
            case 3:
                cout << "\n\tEnter base: ";
                cin >> base;
                if (base < 0)
                {
                    cout << "\n\n\tPositive Numbers Only\n\n";
                    return 0;
                }
                else
                {
                    cout << "\n\tEnter height: ";
                    cin >> height;
                    if (height < 0)
                    {
                        cout << "\n\n\tPositive Numbers Only\n\n";
                        return 0;
                    }
                    else
                    {
                        area = base * height / 2;
                    }
                }
                break;
                
            // Quit
            default:
                return 0;
        }
        cout << "\n\tArea: " << area << "\n\n";
    }
    return 0;
}
