// C++ Practice Question for Interviews
// Write a Program To Check the ASCII Code of a Character

#include<iostream>
using namespace std;

int main(){
   char check;
   
   cout << "Enter the character to check its ASCII code: ";
   cin >> check;
   
   cout << "ASCII: " << static_cast<int>(check);
   
   return 0;
}
