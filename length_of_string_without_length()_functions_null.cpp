// C++ Practice Question for Interviews
// Write a Program to Find the Length of the String Without using strlen() or string.length() Function using null terminator

#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    
    cout << "Enter a string to find the length of it:  ";
    cin >> s;
    
    int length = 0;
    int i = 0;
    
    while(s[i] != '\0'){
    	length++;
    	i++;
	}
    
    cout << "Length: " << length << endl;
    
    return 0;
}
