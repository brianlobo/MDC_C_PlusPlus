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
