#include "stdafx.h"
#include <iostream> 
#include <string> 

using namespace std; 

string encodeCaesarCipher(string str, int shift); 

int main()
{
    string str, encoded_string;  
    int shift; 

    cout << "This program encodes a message in Caesar Cipher. \n\n"; 

    cout << "Please enter a message: "; 
    getline(cin, str);  

    cout << "\nHow many times do you want to shift the letter(s) in the message? ";
    cin >> shift; 

    while (shift < 1)
    {
        cout << "You have entered an invalid number. \n"; 
        cout << "Please try again. \n"; 
        cout << "Enter a proper number for the amount of letter shifting: "; 
        cin >> shift; 
    }

    encoded_string = encodeCaesarCipher(str, shift); 

    cout << "\nEncoded message: " << encoded_string << "\n\n"; 

    system("PAUSE"); 

    return 0;
}

string encodeCaesarCipher(string str, int shift)
{
    string temp = str; 
    int length; 

    length = (int)temp.length(); 

    for (int i = 0; i < length; i++)
    {
        if (isalpha(temp[i]))
        {
            for (int j = 0; j < shift; j++)
            {
                if (temp[i] == 'z')
                {
                    temp[i] = 'a'; 
                }
                else if (temp[i] == 'Z')
                {
                    temp[i] = 'A'; 
                }
                else 
                {
                    temp[i]++; 
                }
            }
        }
    }

    return temp; 
}
