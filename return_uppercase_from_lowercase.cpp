// C++ Practice Question for Interviews
/* Write a function which converts a lowercase letter 'a'{'z' to the corresponding 
uppercase letter. If the parameter is not a letter it must be returned unchanged.*/

#include<iostream>
using namespace std;

char conversion(char ch){
	if(ch>='a' && ch<='z'){
		return ch - 32; // Subtracting 32 from ASCII.
	}
	return ch;
}

int main(){
   char check;
   
   cout << "Enter any character in lowercase to convert it to uppercase: ";
   cin >> check;
   
   char display = conversion(check);
   
   if(check>='a' && check<='z'){
   	cout << "Uppercase: " << display;
   }
   else{
   	cout << "Returned Unchanged: " << check;
   }
   
   return 0;
}
