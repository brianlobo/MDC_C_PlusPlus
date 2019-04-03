#include <iostream>
using namespace std;
void    displayDescription();
double  getLength();
double  getWidth();
double  getArea(double length, double width);
void    displayData(double length, double width, double area);


int main() {
    double length, width, area;
    char cont;
    
    displayDescription();
    do {
        length = getLength();
        width = getWidth();
        area = getArea(length, width);
        displayData(length, width, area);
        cout << "\n\n\tWould you like to continue? (y/n): ";
        cin >> cont;
    } while (cont == 'y' || cont == 'Y');
    return 0;
}

void displayDescription(){
    cout << "\nThis program takes a length and width and calculates an area.\n\n";
}

double getLength(){
    double length;
    cout << "\nEnter length: ";
    cin >> length;
    return length;
}

double getWidth(){
    double width;
    cout << "Enter width: ";
    cin >> width;
    return width;
}

double getArea(double length, double width){
    return (length * width);
}

void displayData(double length, double width, double area){
    cout << "\n\tLength: " << length << endl;
    cout << "\tWidth: " << width << endl;
    cout << "\tArea: " << area << endl;
}
