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
            total_deposits,
            total_withdraws,
            total_interest,
            balance_after_withdraws,
            interest_amount,
            ending_balance;
    ifstream file;
    
    i = 0;
    total_deposits = 0;
    total_withdraws = 0;
    total_interest = 0;
    file.open("SavingsAccountBalanceSpaces.txt");
    
    // Reads first 3 digits in the file
    // and stores them in corresponding var
    file >> annual_interest_rate;
    file >> init_balance;
    file >> num_of_months;
    monthly_interest_rate = annual_interest_rate / 12.00;
    
    // Print Top Left Area
    cout << setw(24) << left
        << "Annual Interest Rate: "
        << setw(9) << right << setprecision(2)
        << fixed << annual_interest_rate << "%\n";
    
    cout << setw(24) << left
        << "Monthly Interest Rate: "
        << setw(9) << right
        << monthly_interest_rate << "%\n";
    
    cout << setw(24) << left
        << "Starting Balance:\t$"
        << setw(6) << right
        << init_balance << "\n";
    
    cout << setw(24) << left
        << "Number of Months: "
        << setw(9) << right
        << num_of_months << "\n\n\n";
    
    cout << setw(14) << " "
        << "-----------------------------------"
        << "-----------------------------------"
        << "------------------------\n";
    
    // Displaying the labels
    cout << setw(14) << " "
        << setw(15) << left << " \t Monthly"
        << setw(16) << "|"
        << setw(16) << "|"
        << setw(17) << "|"
        << setw(15) << "|"
        << setw(15) << "|" << endl;
    
    cout << setw(14) << " "
        << setw(15) << left << " \t Beginning"
        << setw(15) << "|\t Deposits"
        << setw(15) << "|\t Withdraws"
        << setw(16) << "|\t Balance"
        << setw(15) << "|\t Interest"
        << setw(17) << "|\t Ending" << endl;
    
    cout << setw(14) << " "
        << setw(15) << left << " \t Balance"
        << setw(16) << "|"
        << setw(16) << "|"
        << setw(16) << "|\t After"
        << setw(15) << "|\t Amount"
        << setw(17) << "|\t Balance" << endl;
    
    cout << setw(14) << " "
        << "-----------------------------------"
        << "-----------------------------------"
        << "------------------------\n";
    
    while (file >> deposits)
    {
        if (deposits < 0)
        {
            cout << "\n\nCannot have negative value for deposits.\n\n";
            return 0;
        }
        file >> withdraws;
        if (withdraws < 0)
        {
            cout << "\n\nCannot have negative value for withdraws.\n\n";
            return 0;
        }
        
        balance_after_withdraws = init_balance + deposits - withdraws;
        interest_amount = balance_after_withdraws * (monthly_interest_rate * .01);
        ending_balance = balance_after_withdraws + interest_amount;
        
        if (ending_balance < 0)
        {
            cout << "\n\n*** Your account has been close because it was overdrawn. ***\n\n";
            return 0;
        }
        
        total_deposits += deposits;
        total_withdraws += withdraws;
        total_interest += interest_amount;
        
        cout << setw(11) << right << ++i << "\t | $"
        << setprecision(2) << fixed
        << setw(11) << right << init_balance << "\t | $"
        << setw(11) << right << deposits << "\t | $"
        << setw(11) << right << withdraws << "\t | $"
        << setw(11) << right << balance_after_withdraws << "\t | $"
        << setw(11) << right << interest_amount << "\t | $"
        << setw(11) << right << ending_balance << "|"
        << endl;
        
        init_balance = ending_balance;
    }
    
    cout << setw(14) << " "
        << "-----------------------------------"
        << "-----------------------------------"
        << "------------------------\n";
    
    cout << setw(14) << "Account |"
        << setw(16) << "|"
        << setw(16) << "|"
        << setw(16) << "|"
        << setw(16) << "|"
        << setw(16) << "|"
        << setw(14) << "|" << endl;
    
    cout << setw(16) << "Balance | $"
        << setw(11) << ending_balance << "  |"
        << setw(16) << "|"
        << setw(16) << "|"
        << setw(16) << "|"
        << setw(16) << "|"
        << setw(14) << "|" << endl;
    
    cout << setw(14) << " "
        << "-----------------------------------"
        << "-----------------------------------"
        << "------------------------\n";
    
    cout << setw(14) << "Year to |"
        << setw(16) << "|"
        << setw(16) << "|"
        << setw(16) << "|"
        << setw(16) << "|"
        << setw(16) << "|"
        << setw(14) << "|" << endl;
    
    cout << setw(14) << "Date |"
        << setw(18) << right << "| $"
        << setw(11) << total_deposits << "  | $"
        << setw(11) << total_withdraws << "  |"
        << setw(18) << "| $"
        << setw(11) << total_interest << "  |"
        << setw(14) << "|" << endl;
    
    cout << setw(14) << " "
        << "-----------------------------------"
        << "-----------------------------------"
        << "------------------------\n";
    
    file.close();
    return 0;
}
