// C++ Practice Question for Interviews
// Write a Program to Calculate Factorial of a Number

#include<iostream>
using namespace std;
int factorial(int n){
	int factorial = 1;
	for(int i = 1; i<=n; i++){
		factorial = factorial * i;
	}
	return factorial;
}
int main(){
	int num;
	cout << "Enter Number to calculate its factorial: ";
	cin >> num;
	cout << "Factorial: " << factorial(num) << endl;
	return 0;
}
