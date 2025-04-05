// C++ Practice Question for Interviews
// Write a Program to Remove spaces from a string

#include <iostream>
#include <string>
using namespace std;

string remove(string str) {
    string final = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            final = final + str[i];
        }
    }
    return final;
}

int main() {
    string s, r;
    cout << "Enter string to spaces from it: ";
    getline(cin, s);
    r = remove(s);
    cout << "After Removal: " << r << endl;
}
