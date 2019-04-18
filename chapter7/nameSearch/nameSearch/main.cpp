//  Name Search
//
//      If you have downloaded this book’s source code from the companion Web site, you
//  will find the following files in this chapter’s folder:

//      • GirlNames.txt—This file contains a list of the 200 most popular names given to girls
//      born in the United States from 2000 to 2009.
//      • BoyNames.txt—This file contains a list of the 200 most popular names given to boys
//      born in the United States from 2000 to 2009.
//
//      Write a program that reads the contents of the two files into two separate arrays or
//  vectors. The user should be able to enter a boy’s name, a girl’s name, or both, and
//  the application should display messages indicating whether the names were among the
//  most popular.

#include <iostream>
#include <string>
#include <fstream>

using namespace std;
void fillArray(string[], string fileName, int SIZE);
int findName(string[], string[], int SIZE);

int main() {
    const int SIZE = 1000;
    string boyNames[1000], girlNames[1000];
    
    fillArray(boyNames, "BoyNames.txt", SIZE);
    fillArray(girlNames, "GirlNames.txt", SIZE);
    
    if (findName(boyNames, girlNames, SIZE) == 1){
        cout << "Name was found!";
    }
    else {
        cout << "Name was not found";
    }
    
    return 0;
}

void fillArray(string array[], string fileName, int SIZE){
    ifstream nameFile;
    nameFile.open(fileName);
    int holder;
    int i = 0;
    
    if (!nameFile){
        cout << "File not found\n";
    }
    else {
        while (!nameFile.eof() && i < SIZE)
        {
            nameFile >> array[i];
            nameFile >> holder;
            i++;
        }
        nameFile.close();
    }
}

int findName(string boyArray[], string girlArray[], int SIZE){
    string searchName;
    
    cout << "Enter the name you are looking for: ";
    cin >> searchName;
    
    for (int i = 0; i < SIZE; i++){
        if (boyArray[i] == searchName || girlArray[i] == searchName)
            return 1;
    }
    return 0;
}
