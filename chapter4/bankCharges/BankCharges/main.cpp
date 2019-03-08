// 14.
//    Bank Charges
//
//    A bank charges $10 per month plus the following check fees for a commercial checking account:
//        $.10 each for fewer than 20 checks
//        $.08 each for 20–39 checks
//        $.06 each for 40–59 checks
//        $.04 each for 60 or more checks
//
//        The bank also charges an extra $15 if the balance of the account falls below $400 (before
//    any check fees are applied). Write a program that asks for the beginning balance and the
//    number of checks written. Compute and display the bank’s service fees for the month.
//
//        Input Validation: Do not accept a negative value for the number of checks written. If a
//    negative value is given for the beginning balance, display an urgent message indicating
//    the account is overdrawn.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const float MONTHLY_FEE = 10.00,
                BELOW_400_FEE = 15.00;
    float balance, costPerCheck, checkFee, total;
    int checksUsed;
    int below400 = 0; // Flag to indicate if balance is below 400
    
    total = 0.00;
    
    // Gets # of checks used and validates the vlaue
    cout << "Enter number of checks used this month: ";
    cin >> checksUsed;
    if (checksUsed < 0)
    {
        cout << "\nERROR: can't have negative checks used.\n\n";
        return 0;
    }
    
    // Gets bank balance and validates the value
    cout << "Enter bank balance: ";
    cin >> balance;
    if (balance < 0)
        cout << "\nATTENTION: Account Overdrawn!";
    
    // Checks if balance is < 400 for the fee
    if (balance < 400)
    {
        total += BELOW_400_FEE;
        below400 = 1;
    }
    
    if (checksUsed >= 60)
        costPerCheck = .04;
    else if (checksUsed >= 40)
        costPerCheck = .06;
    else if (checksUsed >= 20)
        costPerCheck = .08;
    else
        costPerCheck = .1;
        
    checkFee = checksUsed * costPerCheck;
    total += MONTHLY_FEE + checkFee;
    
    cout << "\n";
    cout << "--------------------------------\n";
    cout << setw(25) << left << "Monthly Fee: " << "$" << setw(6)
    << right << setprecision(2) << fixed << MONTHLY_FEE << endl;
    cout << setw(25) << left << "Check Fee: " << "$" << setw(6)
    << right << checkFee << endl;
    if (below400)
        cout << setw(25) << left << "Account under $400: " << "$" << setw(6)
        << right << BELOW_400_FEE << endl;
    cout << "================================\n";
    cout << setw(25) << left << "Total: " << "$" << setw(6) << right << total << endl;
    cout << "--------------------------------\n\n";
    
    return 0;
}
