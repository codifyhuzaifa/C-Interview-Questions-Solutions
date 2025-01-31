// C++ Practice Question for Interviews
// Write a Program to Check Whether a Character is an Alphabet or Not using cctype library

#include<iostream>
#include<cctype>
using namespace std;

int main(){
   char check;
   
   cout << "Enter an character to check whether it's an alphabet or not : ";
   cin >> check;
   
   if(isalpha(check)) {
    cout << "It's an alphabet" << endl;
    }
    else {
    cout << "It's not an alphabet" << endl;
    }

   return 0;
}
