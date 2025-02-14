// C++ Practice Question for Interviews
// Write a C++ Program to Check Whether a Number is a Positive or Negative Number.

#include<iostream>
using namespace std;

int main(){
	int num;
	
	cout << "Enter number to check whether it's positive or negative: ";
	cin >> num;
	
    if(num>0){
		cout << "Number is positive!" << endl;
	}
	else if(num<0){
		cout << "Number is negative!" << endl;
	}
	else{
		cout << "Number is zero" << endl;
	}
	
	return 0;
	
}
