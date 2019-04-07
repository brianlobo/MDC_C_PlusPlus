//                      Lowest Score Drop
//
//          Write a program that calculates the average of a group of test scores, where the lowest
//      score in the group is dropped. It should use the following functions:
//
//      • void getScore() should ask the user for a test score, store it in a reference
//        parameter variable, and validate it. This function should be called by
//        main once for each of the five scores to be entered.
//
//      • void calcAverage() should calculate and display the average of the four highest
//        scores. This function should be called just once by main and should be passed the
//        five scores.
//      • int findLowest() should find and return the lowest of the five scores passed to it.
//        It should be called by calcAverage, which uses the function to determine which of
//        the five scores to drop.
//
//      Input Validation: Do not accept test scores lower than 0 or higher than 100.
// ---------------------------------------------------------------------------------------------------
//      Brian Lobo
//      COP 1334

#include <iostream>
#include <iomanip>
using namespace std;
void displayDescription();
void getScore(int &s1, int &s2, int &s3, int &s4, int &s5);
void calcAverage(int s1, int s2, int s3, int s4, int s5);
int findLowest(int s1, int s2, int s3, int s4, int s5);

int main() {
    int score1, score2, score3, score4, score5;
    
    displayDescription();
    getScore(score1, score2, score3, score4, score5);
    calcAverage(score1, score2, score3, score4, score5);
    return 0;
}

void displayDescription(){
    cout << "This program will take 5 test scores, and \nfind the average of the four highest scores\n\n";
}

void getScore(int &s1, int &s2, int &s3, int &s4, int &s5){
    cout << "\tEnter a score between 0 and 100\n\n";
    
    cout << "Enter score 1: ";
    cin >> s1;
    while (s1 < 0 || s1 > 100){
        cout << "\n\tInvalid Entry\n\nEnter score 1: ";
        cin >> s1;
    }
    cout << "Enter score 2: ";
    cin >> s2;
    while (s2 < 0 || s2 > 100){
        cout << "\n\tInvalid Entry\n\nEnter score 2: ";
        cin >> s2;
    }
    cout << "Enter score 3: ";
    cin >> s3;
    while (s3 < 0 || s3 > 100){
        cout << "\n\tInvalid Entry\n\nEnter score 3: ";
        cin >> s3;
    }
    cout << "Enter score 4: ";
    cin >> s4;
    while (s4 < 0 || s4 > 100){
        cout << "\n\tInvalid Entry\n\nEnter score 4: ";
        cin >> s4;
    }
    cout << "Enter score 5: ";
    cin >> s5;
    while (s5 < 0 || s5 > 100){
        cout << "\n\tInvalid Entry\n\nEnter score 5: ";
        cin >> s5;
    }
}

void calcAverage(int s1, int s2, int s3, int s4, int s5){
    int total;
    float avg;
    
    total = s1 + s2 + s3 + s4 + s5;
    total -= findLowest(s1, s2, s3, s4, s5);
    avg = total / 4.0;
    cout << "\n\n\tAverage of the 4 highest scores: " << setprecision(2) << fixed << avg << "\n\n";
    
}

int findLowest(int s1, int s2, int s3, int s4, int s5){
    int lowest;
    lowest = s1;
    if (s2 < lowest)
        lowest = s2;
    if (s3 < lowest)
        lowest = s3;
    if (s4 < lowest)
        lowest = s4;
    if (s5 < lowest)
        lowest = s5;
    return lowest;
}
