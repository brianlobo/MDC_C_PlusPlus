
//       Practice with while loops)
//
//       Check if the user's password matches PASSWORD.
//
//       The user has 3 attempts.

#include <iostream>
#include <string>

using namespace std;

int main(){
    const string PASSWORD = "P12345!";
    string userPass;
    int i = 1;
    
    cout << "Please enter password: ";
    cin >> userPass;

    while (userPass != PASSWORD && i < 3)
    {
        cout << "\tAttempts left: " << (3 - i++) << endl;
        cout << "\tInvalid Password\n\n";
        cout << "Please enter password: ";
        cin >> userPass;
    }
    
    if (userPass == PASSWORD)
        cout << "\tAccess granted!\n\n";
    else
        cout << "\tPleas contact your bank.\n\n";
    
    return 0;
}
