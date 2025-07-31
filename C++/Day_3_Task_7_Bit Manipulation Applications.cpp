#include <iostream>

using namespace std;

// Function to check if the 3rd bit is set
bool isThirdBitSet(int num) {
    return (num & (1 << 3)) != 0; // Mask with 1 at the 3rd position
}

// Function to set a specific bit
int setBit(int num, int position) {
    return num | (1 << position); // OR with 1 at 'position'
}

// Function to clear a specific bit
int clearBit(int num, int position) {
    return num & ~(1 << position); // AND with NOT(1 at 'position')
}

// Function to toggle a specific bit
int toggleBit(int num, int position) {
    return num ^ (1 << position); // XOR with 1 at 'position'
}

// Function to swap two numbers without using a temporary variable
void swapUsingXOR(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main() {
    int num = 10; // Binary: 1010
    cout << "Checking if 3rd bit is set in " << num << ": " 
         << (isThirdBitSet(num) ? "Yes" : "No") << endl;

    // Set bit at position 1 (0-based)
    cout << "Setting 1st bit: " << setBit(num, 1) << endl; // 1010 | 0010 = 1010 (no change)

    // Clear bit at position 3 (0-based)
    cout << "Clearing 3rd bit: " << clearBit(num, 3) << endl; // 1010 & 0111 = 0010 (2)

    // Toggle bit at position 2 (0-based)
    cout << "Toggling 2nd bit: " << toggleBit(num, 2) << endl; // 1010 ^ 0100 = 1110 (14)

    // Swapping numbers using XOR
    int a = 5, b = 7;
    cout << "Before Swap: a = " << a << ", b = " << b << endl;
    swapUsingXOR(a, b);
    cout << "After Swap: a = " << a << ", b = " << b << endl;

    return 0;
}
