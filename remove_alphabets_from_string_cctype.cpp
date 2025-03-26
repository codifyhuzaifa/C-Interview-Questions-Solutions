// C++ Practice Question for Interviews
// Write a Program to Remove alphabets from a string

#include <iostream>
#include <cctype>
using namespace std;

string remove(string str) {
    string final = "";
    for (int i = 0; i < str.length(); i++) {
        if (!isalpha(str[i])) {
            final = final + str[i];
        }
    }
    return final;
}

int main() {
    string s, r;
    cout << "Enter string to remove alphabets from it: ";
    getline(cin, s);
    r = remove(s);
    cout << "After Removal: " << r << endl;
}

