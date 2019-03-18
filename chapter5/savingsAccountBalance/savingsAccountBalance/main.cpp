//  16. Savings Account Balance
//
//        Write a program that calculates the balance of a savings account at the end of a period
//  of time. It should ask the user for the annual interest rate, the starting balance, and the
//  number of months that have passed since the account was established. A loop should
//  then iterate once for every month, performing the following:
//
//          A) Ask the user for the amount deposited into the account during the month.
//          (Do not accept negative numbers.) This amount should be added to the balance.
//
//          B) Ask the user for the amount withdrawn from the account during the month.
//          (Do not accept negative numbers.) This amount should be subtracted from the balance.
//
//          C) Calculate the monthly interest. The monthly interest rate is the annual interest rate
//          divided by twelve. Multiply the monthly interest rate by the balance, and add the
//          result to the balance.
//
//        After the last iteration, the program should display the ending balance, the total
//   amount of deposits, the total amount of withdrawals, and the total interest earned.

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    int num_of_months, i;
    float   annual_interest_rate,
            monthly_interest_rate,
            init_balance,
            deposits,
            withdraws,
            balance_after_withdraws,
            interest_amount,
            ending_balance;
    ifstream file;
    
    i = 0;
    file.open("SavingsAccountBalanceSpaces.txt");
    
    file >> annual_interest_rate;
    file >> init_balance;
    file >> num_of_months;
    monthly_interest_rate = annual_interest_rate / 12.00;
    
    // Print Top Left Area
    cout << setw(24) << left << "Annual Interest Rate: "
    << setw(9) << right << setprecision(2) << fixed << annual_interest_rate << "% |\n";
    
    cout << setw(24) << left << "Monthly Interest Rate: "
    << setw(9) << right << monthly_interest_rate << "% |\n";
    
    cout << setw(24) << left << "Starting Balance: "
    << setw(9) << right << init_balance << "% |\n";
    
    cout << setw(24) << left << "Number of Months: "
    << setw(9) << right << num_of_months << "% |\n";
    cout << "-----------------------------------\n\n";
    
    // Displaying the labels
    cout << setw(14) << " " << setw(15) << left << "|\t Monthly" << setw(16) << "|" << setw(16) << "|" << setw(17) << "|" << setw(16) << "|" << setw(15) << "|" << endl;
    
    cout << setw(14) << " " << setw(15) << left << "|\t Beginning" << setw(15) << "|\tDeposits" << setw(15) << "|\tWithdraws" << setw(16) << "|\tBalance" << setw(16) << "|\tInterest" << setw(17) << "|\tEnding" << endl;
    
    cout << setw(14) << " " << setw(15) << left << "|\t Balance" << setw(16) << "|" << setw(16) << "|" << setw(16) << "|\tAfter" << setw(16) << "|\tAmount" << setw(17) << "|\tBalance" << endl;
    cout << setw(14) << " " << "----------------------------------------------------------------------------------------------\n";
    
    
    
    while (!file.eof())
    {
        
        file >> deposits;
        file >> withdraws;
        balance_after_withdraws = init_balance + deposits - withdraws;
        interest_amount = balance_after_withdraws * (monthly_interest_rate * .01);
        ending_balance = balance_after_withdraws + interest_amount;
        
        cout << setw(11) << right << ++i << "\t | $"
        << setprecision(2) << fixed
        << setw(11) << right << init_balance << "\t | $"
        << setw(11) << right << deposits << "\t | $"
        << setw(11) << right << withdraws << "\t | $"
        << setw(11) << right << balance_after_withdraws << "\t | $"
        << setw(11) << right << interest_amount << "\t | $"
        << setw(11) << right << ending_balance
        << endl;
        
        init_balance = ending_balance;
    }
    
    
    file.close();
    
    return 0;
}
