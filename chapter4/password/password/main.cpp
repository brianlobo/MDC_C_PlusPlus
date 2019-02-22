#include <iostream>
#include <string>

using namespace std;

int main(){
    const string PASSWORD = "P12345!";
    string userPass;
    
    cout << "Please enter password: ";
    cin >> userPass;
    
    if (userPass == PASSWORD)
        cout << "Correct\n";
    else
        cout << "Invalid\n";
    
    //cout << ((userPass == PASSWORD) ? "Correct\n" : "Invalid\n");
    
    return 0;
}
