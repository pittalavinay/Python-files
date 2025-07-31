/*
Task 5: 
 
Write a program that takes two strings, concatenates them using strcat(), and prints the result.
Implement a custom version of strlen() and compare it with the built-in function.
Use strcmp() to sort an array of strings alphabetically.
*/

#include <iostream>
#include <vector>
#include <algorithm> // For sort()
using namespace std;

// Custom strlen() function
int custom_strlen(const string& str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to sort an array of strings using sort()
void sort_strings(vector<string>& words) {
    sort(words.begin(), words.end());  // Sorts lexicographically
}

int main() {
    // Task 1: String Concatenation using `+` operator
    string str1 = "Hello, ";
    string str2 = "World!";
    str1 += str2; // Concatenates str2 to str1
    cout << "Concatenated String: " << str1 << endl;

    // Task 2: Custom strlen() vs. Built-in length()
    cout << "Custom strlen: " << custom_strlen(str1) << endl;
    cout << "Built-in length(): " << str1.length() << endl;

    // Task 3: Sorting Strings using sort()
    vector<string> words = {"Banana", "Apple", "Mango", "Cherry", "Grapes"};

    sort_strings(words);
    
    cout << "Sorted Strings: " << endl;
    for (const string& word : words) {
        cout << word << endl;
    }

    return 0;
}
