/*
Write a program that takes two strings, concatenates them using strcat(), and prints the result.
Implement a custom version of strlen() and compare it with the built-in function.
Use strcmp() to sort an array of strings alphabetically.
*/

#include <iostream>
#include <cstring> // For strcat(), strlen(), strcmp()
using namespace std;

// Custom strlen() function
int custom_strlen(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to sort an array of strings using strcmp()
void sort_strings(char arr[][50], int n) {
    char temp[50];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) { // If arr[i] > arr[j], swap
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main() {
    // Task 1: String Concatenation using strcat()
    char str1[50] = "Hello, ";
    char str2[50] = "World!";
    strcat(str1, str2); // Concatenates str2 to str1
    cout << "Concatenated String: " << str1 << endl;

    // Task 2: Custom strlen() vs. Built-in strlen()
    cout << "Custom strlen: " << custom_strlen(str1) << endl;
    cout << "Built-in strlen: " << strlen(str1) << endl;

    // Task 3: Sorting Strings using strcmp()
    char words[5][50] = {"Banana", "Apple", "Mango", "Cherry", "Grapes"};
    int n = 5;

    sort_strings(words, n);
    
    cout << "Sorted Strings: " << endl;
    for (int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }

    return 0;
}
