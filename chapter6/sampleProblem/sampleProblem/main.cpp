#include <iostream>
#include <string>
using namespace std;

void showDiscription();
int sumOfWeeks(int week1, int week2);
float avgOfWeeks(int sum, int divisor);
void showResults(string name, int sum, float avg);
// This is a "Pass by reference" function
void getData(string &name, int &week1, int &week2);

int main() {
    string name;
    int week1, week2, sum;
    
    showDiscription();
    getData(name, week1, week2);
    
    sum = sumOfWeeks(week1, week2);
    showResults(name, sum, avgOfWeeks(sum, 2));
    
    return 0;
}

void getData(string &name, int  &week1, int &week2){
    cout << "Enter salesperson's name: ";
    getline(cin, name);
    
    cout << "Enter week 1 sales: ";
    cin >> week1;
    
    cout << "Enter week 2 sales: ";
    cin >> week2;
}

void showDiscription(){
    cout << "\nThis program takes a salesperson's name and "
    << "two weeks of sales and calculates the avgerage and sum.\n\n";
}

void showResults(string name, int sum, float avg){
    cout << "\n\n\tName: " << name << endl;
    cout << "\tAverage: " << avg << endl;
    cout << "\tSum: " << sum << "\n\n\n";
}

int sumOfWeeks(int week1, int week2){
    return (week1 + week2);
}

float avgOfWeeks(int sum, int divisor){
    return (float(sum) / divisor);
}

