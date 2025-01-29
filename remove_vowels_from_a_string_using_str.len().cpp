// C++ Practice Question for Interviews
// Write a Program to Remove the Vowels from a String using str.len()

#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char word[100];

    cout << "Enter a string to remove vowels from it: ";
    cin >> word;

    int length = strlen(word);

    for (int i = 0; i < length; i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
            word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U') {
            for (int j = i; j < length; j++) {
                word[j] = word[j + 1];
            }
            length--;
            i--;
        }
    }

    cout << "String after removing vowels: " << word << endl;

    return 0;
}

