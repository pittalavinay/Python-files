/*
Write a program that declares an integer variable, assigns it a value, and prints its memory address using a pointer.
Demonstrate how to increment, decrement, and compare pointers.
*/

#include <iostream>
using namespace std;

int main() {
    int a;
    a = 10;
    int* ptr = &a;
    cout << "Memory address of a: " << ptr << endl;

    // Incrementing pointer
    ptr++;
    cout << "After incrementing pointer: " << ptr << endl;

    // Decrementing pointer
    ptr--;
    cout << "After decrementing pointer: " << ptr << endl;

    // Comparing pointers
    int* ptr1 = &a;
    if (ptr == ptr1) {
        cout << "Pointers are the same" << endl;
    } else {
        cout << "Pointers are different" << endl;
    }

    return 0;
}
