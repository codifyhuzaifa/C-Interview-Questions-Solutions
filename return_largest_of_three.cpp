// C++ Practice Question for Interviews
// Write a Program to return the largest of three numbers entered through functions.

#include<iostream>
using namespace std;

int function(int number1, int number2, int number3){
	if(number1>number2 && number1>number3){
		return number1;
	}
	else if(number2>number1 && number2>number3){
		return number2;
	}
	else{
		return number3;
	}
	
}
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
	else{
	int x = function(num1, num2, num3);
	
	cout << "Largest Number: " << x << endl;
    }
    
	return 0;
}

