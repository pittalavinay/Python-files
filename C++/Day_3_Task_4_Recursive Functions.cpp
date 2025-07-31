    /*
    Task 4: Recursive Functions
    Implement a recursive function for calculating Fibonacci numbers.
    Compare recursive vs. iterative implementations for Fibonacci and analyze performance.
    */

    #include <iostream>
    #include <chrono>
    using namespace std;
    using namespace std::chrono;

    // Recursive Fibonacci
    int fibonacci_recursive(int n) {
        if (n <= 1) return n;
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }

    // Iterative Fibonacci
    int fibonacci_iterative(int n) {
        if (n <= 1) return n;
        
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }

    int main() {
        int n = 10;

        // Recursive Fibonacci
        cout << "Recursive Fibonacci(" << n << "): " << fibonacci_recursive(n) << endl;

        // Iterative Fibonacci
        cout << "Iterative Fibonacci(" << n << "): " << fibonacci_iterative(n) << endl;

        return 0;
    }
