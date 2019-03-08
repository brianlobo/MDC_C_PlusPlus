//    15.
//        Shipping Charges
//
//            The Fast Freight Shipping Company charges the following rates:
//
//        Weight of Package (in Kilograms) Rate per 500 Miles Shipped
//            2 kg or less $1.10
//            Over 2 kg but not more than 6 kg $2.20
//            Over 6 kg but not more than 10 kg $3.70
//            Over 10 kg but not more than 20 kg $4.80
//
//            Write a program that asks for the weight of the package and the distance it is to be
//        shipped, and then displays the charges.
//
//            Input Validation: Do not accept values of 0 or less for the weight of the package. Do
//        not accept weights of more than 20 kg (this is the maximum weight the company will
//        ship). Do not accept distances of less than 10 miles or more than 3,000 miles. These
//        are the company’s minimum and maximum shipping distances

#include <iostream>

using namespace std;

int main() {
    float rate, shippingCharge;
    int weight, distance;
    
    cout << "Enter weight (kg): ";
    cin >> weight;
    if (weight <= 0 || weight > 20)
        cout << "Enter Valid Weight" << endl;
    else
    {
        cout << "Enter distance (miles): ";
        cin >> distance;
        if (distance < 10 || distance > 3000)
            cout << "Enter Valid Distance" << endl;
        else
        {
            if (weight <= 2)
                rate = 1.1;
            else if (weight <= 6)
                rate = 2.2;
            else if (weight <= 10)
                rate = 3.7;
            else
                rate = 4.8;
            
            shippingCharge = distance / 500 * rate;
            
            if (distance % 500 > 0)
                shippingCharge += rate;
            
            cout << "\nShipping Charge: " << shippingCharge << "\n\n";
        }
    }
    return 0;
}


// Vars used:
// weight, distance, rate, shippingCharge
