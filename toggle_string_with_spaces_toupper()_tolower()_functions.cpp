// C++ Practice Question for Interviews
/* Write a Program to Toggle Each Character in a String with spaces 
using toupper() and tolower() functions */

#include<iostream>
#include<string> 
#include<cctype>

using namespace std;

int main() {
    string s;
    
    
    cout << "Enter string to toggle: ";
    getline(cin, s);  

    for (int i = 0; i < s.length(); i++) {
        if (islower(s[i])) {
            s[i] = toupper(s[i]); 
        }
        
        else if (isupper(s[i])) {
            s[i] = tolower(s[i]);  
        }
    }

    cout << "Toggled string: " << s << endl;

    return 0;
}

