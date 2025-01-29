// C++ Practice Question for Interviews
// Write a Program to Detect Vowels from a string using string.length()

#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	
	cout << "Enter a string to detect vowels from it:  ";
	cin >> s;
	
	string removed = " ";
	
	
	for(int i=0; i < s.length(); i++){
		    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || 
			s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
			removed = removed + s[i];	
		}
	}
		
	cout << "Detected Vowels: " << removed;
	
	return 0;
}

