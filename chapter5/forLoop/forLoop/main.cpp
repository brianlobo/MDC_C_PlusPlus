#include <iostream>

using namespace std;

int main()
{
    int userNum;
    int i = 0;
    
    cout << "How many times would you like to see \"Hello world\"?: ";
    cin >> userNum;
    
    while (i++ < userNum)
        i % 2 != 0 ? cout << i << " - Hello World!\n" : cout << i << "* - Hello World!\n";
        
    return 0;
}
