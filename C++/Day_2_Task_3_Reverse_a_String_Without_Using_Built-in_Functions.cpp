#include<iostream>
using namespace std;
#include<string>

/*
TASK 3: Reverse a String Without Using Built-in Functions
1.Accept a string input from the user.
2.Find the length of the string.
3.Display the reversed string.
*/

int main()
{
    string str;

    cout << "Enter the String :" << endl;

    getline(cin, str);
    
    int length = 0;

    while(str[length] != '\0')
    {
        length++;
    }

    for(int i = length-1; i >= 0; i--)
    {
        cout << str[i] ;
    }

    return 0;
}