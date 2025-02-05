// C++ Practice Question for Interviews
// Write a Program To Check Whether Number is Even Or Odd using bool.

#include<iostream>
using namespace std;

bool function(int number){
	return (number % 2 == 0);
}

int main(){
	int num;
	
	cout << "Enter number to check whether it's even or odd: ";
	cin >> num;
	
	if (num == 0){
		cout << "Number is zero!" << endl;
	}
	else if (function(num) == true) {
		cout << "Number is even!" << endl;
	}
	else{
	    cout << "Number is odd!" << endl;
    }
	return 0;
}
