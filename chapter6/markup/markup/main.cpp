//  1. Markup
//  Write a program that asks the user to enter an item’s wholesale cost and its markup
// percentage. It should then display the item’s retail price. For example:
//
//      • If an item’s wholesale cost is 5.00 and its markup percentage is 100%, then the
//      item’s retail price is 10.00.
//
//      • If an item’s wholesale cost is 5.00 and its markup percentage is 50%, then the item’s
//      retail price is 7.50.
//
//  The program should have a function named calculateRetail that receives the
//  wholesale cost and the markup percentage as arguments and returns the retail price
//  of the item.
//
//  Input Validation: Do not accept negative values for either the wholesale cost of the
//  item or the markup percentage.

#include <iostream>
#include <iomanip>
using namespace std;
void displayDescription();
void getData(int &markup, float &wholeSaleCost);
float calcRetailPrice(int markup, float wholeSaleCost);

int main(){
    int markup;
    float wholeSaleCost, retailPrice;
    
    markup = wholeSaleCost = 0;
    displayDescription();
    getData(markup, wholeSaleCost);
    retailPrice = calcRetailPrice(markup, wholeSaleCost);
    cout << "\n\tRetail Price: $" << setprecision(2) << fixed << retailPrice << "\n\n";
    return 0;
}

void displayDescription(){
    cout << "This program takes a wholesale price, "
    << "and markup %, and calculates the retail price.\n\n";
}

void getData(int &markup, float &wholeSaleCost){
    cout << "Enter item's wholesale cost: ";
    cin >> wholeSaleCost;
    while (wholeSaleCost < 0){
        cout << "\n\nEnter valid number: ";
        cin >> wholeSaleCost;
    }
    cout << "Enter markup %: ";
    cin >> markup;
    while (markup < 0){
        cout << "\n\nEnter valid number: ";
        cin >> markup;
    }
}

float calcRetailPrice(int markup, float wholeSaleCost){
    return (((markup * .01) * wholeSaleCost) + wholeSaleCost);
}
