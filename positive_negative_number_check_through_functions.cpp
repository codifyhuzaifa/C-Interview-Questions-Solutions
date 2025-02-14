// C++ Practice Question for Interviews
// Write a C++ Program to Check Whether a Number is a Positive or Negative Number through functions.

#include<iostream>
using namespace std;

void check(int number) {
    if (number > 0) {
        cout << "Number is positive!" << endl;
    }
    else if (number < 0) {
        cout << "Number is negative!" << endl;
    }
    else {
        cout << "Number is zero!" << endl;
    }
}

int main() {
    int num;
    
    cout << "Enter number to check whether it's positive or negative: ";
    cin >> num;
    
    check(num);
    
    return 0;
}

