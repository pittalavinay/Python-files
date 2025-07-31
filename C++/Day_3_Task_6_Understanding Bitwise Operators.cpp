/*
Create a program to demonstrate &, |, ^, ~, <<, >> operations with program examples.
Show how to extract the nth bit from a number.
*/

#include <iostream>

using namespace std;

int main() {
    int a = 5, b = 3; // Binary: 5 = 0101, 3 = 0011
    
    // Bitwise AND
    cout << "a & b = " << (a & b) << endl; 
    
    // Bitwise OR
    cout << "a | b = " << (a | b) << endl; 
    
    // Bitwise XOR
    cout << "a ^ b = " << (a ^ b) << endl; 
    
    // Bitwise NOT (1’s complement)
    cout << "~a = " << (~a) << endl; 
    
    // Left Shift
    cout << "a << 1 = " << (a << 1) << endl; 
    
    // Right Shift
    cout << "a >> 1 = " << (a >> 1) << endl; 

    int n = 2;
    int bit = (a >> n) & 1; 
    cout << "The " << n << "nd bit of " << a << " is: " << bit << endl;

    return 0;
}
