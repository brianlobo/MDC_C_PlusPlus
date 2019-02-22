#include <iostream>

using namespace std;

int main() {
    float rate, shippingCharge;
    int weight, distance;
    
    cout << "Enter weight: ";
    cin >> weight;
    if (weight <= 0 || weight > 20)
        cout << "Enter Valid Weight" << endl;
    else
    {
        cout << "Enter distance: ";
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
            
            //DISPLAY SHIPPING CHARGE HERE
        }
    }
    return 0;
}


// Vars used:
// weight, distance, rate, shippingCharge
