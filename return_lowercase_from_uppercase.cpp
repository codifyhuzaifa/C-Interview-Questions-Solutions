// C++ Practice Question for Interviews
/* Write a function which converts an uppercase letter 'A'{'Z' to the corresponding 
lowercase letter. If the parameter is not a letter it must be returned unchanged.*/

#include<iostream>
using namespace std;

char conversion(char ch){
	if(ch>='A' && ch<='Z'){
		return ch + 32; // Adding 32 to ASCII.
	}
	return ch;
}

int main(){
   char check;
   
   cout << "Enter any character in uppercase to convert it to lowercase: ";
   cin >> check;
   
   char display = conversion(check);
   
   if(check>='A' && check<='Z'){
   	cout << "Lowercase: " << display;
   }
   else{
   	cout << "Returned Unchanged: " << check;
   }
   
   return 0;
}
