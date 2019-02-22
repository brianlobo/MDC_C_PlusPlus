#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const float PACKAGE_COST = 99.00;
    float price, discountRate, discount, total;
    int unitsSold;
    
    cout << "\nEnter the number of pakages sold: ";
    cin >> unitsSold;
    if (unitsSold <= 0)
    {
        cout << "Must enter valid number!";
        return 0;
    }
    else
    {
        price = unitsSold * PACKAGE_COST;
        if (unitsSold >= 100)
            discountRate = .5;
        else if (unitsSold >= 50)
            discountRate = .4;
        else if (unitsSold >= 20)
            discountRate = .3;
        else if (unitsSold >= 10)
            discountRate = .2;
        else
            discountRate = 0;
        
        discount = price * discountRate;
        total = price - discount;
    }
    cout << "\n\n";
    cout << setw(21) << left << "Cost: " << "$" << setw(7) << right << setprecision(2) << fixed << price << endl;
    cout << setw(21) << left << "Discount Rate: " << setw(8) << right << (discountRate * 100) << "%" << endl;
    cout << setw(21) << left << "Discount Amount: " << "$" << setw(7) << right << discount << endl;
    cout << "-------------------------------" << endl;
    cout << setw(21) << left << "Total: " << "$" << setw(7) << right << total << "\n\n";
    return 0;
}
