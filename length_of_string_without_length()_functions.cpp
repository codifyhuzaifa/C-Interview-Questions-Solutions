// C++ Practice Question for Interviews
// Write a Program to Find the Length of the String Without using strlen() or string.length() Function 

#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
    string s;
    
    cout << "Enter a string to find the length of it:  ";
    cin >> s;
    
    int length = 0;
    int i = 0;
    
    while(isalpha(s[i])){
    	length++;
    	i++;
	}
    
    cout << "Length: " << length << endl;
    
    return 0;
}


