/*
Create a function that adds two numbers and another that multiplies them.
Use a function pointer to call both functions dynamically.
Pass a function pointer as an argument to another function.
*/

#include<iostream>
using namespace std;

int addition(int a, int b)
{
    return a + b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int calculator(int (*operation)(int, int), int a, int b)
{
    return operation(a, b);
}

int main()
{
    int x = 10, y = 20;
    int sum = calculator(addition, x, y);
    int mul = calculator(multiplication, x, y);

    cout << "Addition of " << x <<" and " << y << " is : " << sum <<endl;
    cout <<"Multiplication of "<< x <<" and " << y << " is : "<< mul <<endl;
    return 0;
}