// C++ Practice Question for Interviews
// Write a Program to Find the Largest of the Three Numbers.

#include<iostream>
using namespace std;

int main(){
	int num1, num2, num3;
	
	cout << "Enter first number: ";
	cin >> num1;
	
    cout << "Enter second number:  ";
	cin >> num2;
	
	cout << "Enter third number:  ";
	cin >> num3;
	
	if (num2==num1 && num2==num3) {
		cout << "All numbers are equal!" << endl;
	}
	
	else if(num1>num2 && num1>num3){
		cout << "Largest Number: " << num2 << endl;
	}
	else if(num2>num1 && num2>num53){
		cout << "Largest Number: " << num2 << endl;
	}
	else{
		cout << "Largest Number: " << num3 << endl;
	}
    
	return 0;
}

