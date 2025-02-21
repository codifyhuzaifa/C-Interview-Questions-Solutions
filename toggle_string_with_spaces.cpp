// C++ Practice Question for Interviews
// Write a Program to Toggle Each Character in a String with spaces.

#include<iostream>
#include<string>  

using namespace std;

int main() {
    string s;
    
    cout << "Enter string to toggle: ";
    getline(cin, s);  

 
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;  // Convert to lowercase by adding 32 to ASCII value
        }
        else if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;  // Convert to uppercase by subtracting 32 from ASCII value
        }
    }

    cout << "Toggled string: " << s << endl;

    return 0;
}

