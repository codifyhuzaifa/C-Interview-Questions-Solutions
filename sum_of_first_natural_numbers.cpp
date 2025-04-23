// C++ Practice Question for Interviews
// Write a Program to Calculate Sum of First Natural Numbers

#include<iostream>
#include<string>
using namespace std;
int sum(int n){
	int sum = 0;
	for(int i =0; i<=n; i++){
		sum = sum + i;
	}
	return sum;
}
int main(){
	int num = 0;
	cout << "Enter Natural Numbers to calculate their sum: ";
	cin >> num;
	cout << "Sum: " << sum(num) << endl;
	return 0;
}
