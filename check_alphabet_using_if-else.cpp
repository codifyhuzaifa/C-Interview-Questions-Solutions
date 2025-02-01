// C++ Practice Question for Interviews
// Write a Program to Print Check Whether a Character is an Alphabet or Not using if-else

#include<iostream>
using namespace std;

int main(){
   char check;
   
   cout << "Enter an alphabet to check whether it's Vowel or Consonant: ";
   cin >> check;
   
   if( (check >= 'A' && check <= 'Z') || (check >= 'a' && check <= 'z')) {
    cout << "It's an alphabet" << endl;
    }
    else {
    cout << "It's not an alphabet" << endl;
    }

   return 0;
}
