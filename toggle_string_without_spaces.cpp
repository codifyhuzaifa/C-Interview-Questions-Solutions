// C++ Practice Question for Interviews
// Write a Program to Toggle Each Character in a String without spaces

#include <string>
#include <iostream>
#include<cctype>
using namespace std;

int main()
{
    string s;
    
    cout << "Enter string without spaces to toggle it: ";
    getline(cin, s);

    int i = 0;
    
    while(isalpha(s[i])){
    	if(s[i] > 'A' && s[i] < 'Z'){
    		s[i] = s[i] + 32; // Adding 32 to ASCII
		}
		else{
			s[i] = s[i] - 32; // Subtracting 32 from ASCII
		}
		i++;
	}

    cout << "Toggled string: " << s << endl;

    return 0;
}
