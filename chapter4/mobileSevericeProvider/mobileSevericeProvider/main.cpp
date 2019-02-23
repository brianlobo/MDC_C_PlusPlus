#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char choice;
    int minsUsed, maxMins;
    float cost, extraMinsRate, extraMinsFee, extraMinsUsed, total;
    
    extraMinsRate = 0;
    extraMinsUsed = 0;
    extraMinsFee = 0;
    total = 0;
    
    // Display Menu
    cout << "Package A: For $39.99 per month 450 minutes are provided. Additional minutes are\n" <<
    setw(11) << " " << "$0.45 per minute.\n\n";
    cout << "Package B: For $59.99 per month 900 minutes are provided. Additional minutes are\n" <<
    setw(11) << " " << "$0.45 per minute.\n\n";
    cout << "Package C: For $69.99 per month unlimited minutes provided.\n\n";
    cout << "=================================================================================\n\n";
    cout << "Enter package (A, B, or C): ";
    cin >> choice;
    
    // Makes Choice uppercase
    choice = toupper(choice);
    
    // Choice Validation
    if (choice != 'A' && choice != 'B' && choice != 'C')
        cout << "Must enter a valid package.";
    else
    {
        cout << "Enter how many minutes you used: ";
        cin >> minsUsed;
        if (minsUsed < 0)
            cout << "Cannot enter a negative number.";
        else
        {
            switch (choice)
            {
                case 'A':
                    maxMins = 450;
                    cost = 39.99;
                    extraMinsRate = .45;
                    break;
                
                case 'B':
                    maxMins = 900;
                    cost = 59.99;
                    extraMinsRate = .4;
                    break;
                
                default:
                    maxMins = 0;
                    cost = 69.99;
            }
            
            // If customer used extra mins
            if (minsUsed > maxMins && maxMins)
            {
                extraMinsUsed = minsUsed - maxMins;
                extraMinsFee = extraMinsUsed * extraMinsRate;
                total += extraMinsFee;
            }
            
            total += cost;
            
            // Output
            cout << "\n\n" << setprecision(2) << fixed;
            cout << setw(27) << left << "Price for package: " << "$" << setw(7) << cost << endl;
            if (extraMinsUsed)
                cout << setw(27) << left << "Additional minutes used: " << "$" << setw(7) << extraMinsFee << endl;
            cout << setw(27) << left << "Total: " << "$" << setw(7) << total << "\n\n";
        }
    }
    return 0;
}
