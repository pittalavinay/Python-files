/*#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int a,b,c, power;
    cout << "Enter Number1 :";
    cin >> a;

    cout << "Enter Number2 :";
    cin >> b;

    cout << "Enter the power :";
    cin >> power;

    int as = pow(a, power);
    int bs = pow(b, power);

    cout << " a square value is " << as;
    cout << " b square value is " << bs;

   c = sqrt(as + bs);

    cout << "The Hypothesis is : " << c; 
}*/

/*#include<iostream>
using namespace std;

// Define an enum for Traffic Lights
enum TrafficLight { Red, Yellow, Green };

int main() {
    TrafficLight signal;

    signal = Red;

    if (signal == Red) {
        cout << "Stop! The light is Red." << endl;
    }
    else if (signal == Yellow) {
        cout << "Get Ready! The light is Yellow." << endl;
    }
    else if (signal == Green) {
        cout << "Go! The light is Green." << endl;
    }

    return 0;
}*/

/*#include<iostream>
using namespace std;

int main() {
    int a = 10;        
    int* p;            
    p = &a;            

    cout << "Value of a: " << a << endl;         
    cout << "Address of a: " << &a << endl;      
    cout << "Value stored in pointer p: " << p << endl; 
    cout << "Value pointed by p: " << *p << endl;        

    return 0;
}*/

/*#include<iostream>
using namespace std;

int main() {
    int arr[5] = {5, 10, 15, 20, 25};
    int* p = arr;

    cout << *(p + 2) << endl;  
    cout << *(p + 4) << endl;  
    cout << *(p + 4 - 3) << endl;  

    return 0;
}
*/

/*#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* p1 = arr;        
    int* p2 = arr + 3;     

    if (p1 < p2)
        cout << "p1 is before p2 in memory" << endl;

    if (p1 != p2)
        cout << "p1 and p2 point to different elements" << endl;

    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
int* arr = new int[5];

for(int i = 0; i < 5; i++) {
    arr[i] = i * 10;
    cout << arr[i] << " ";
}

delete[] arr;  
}*/

/*#include <iostream>
using namespace std;

int main() {
    int* ptr = (int*) malloc(5 * sizeof(int));

    if (ptr == NULL) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 10;   
        cout << ptr[i] << " ";
    }

    free(ptr);
    return 0;
}*/


/*#include <iostream>
using namespace std;

int main() {
    // malloc() allocates memory for 5 integers
    void* ptr = malloc(5 * sizeof(int));  // returns a void pointer

    // Checking if memory allocation was successful
    if (ptr == NULL) {
        cout << "Memory allocation failed!" << endl;
        return 1;  // Exit the program if memory allocation fails
    }

    // Casting void pointer to int pointer
    int* intPtr = (int*) ptr;

    // Assign values to the allocated memory
    for (int i = 0; i < 5; i++) {
        intPtr[i] = i * 10;
    }

    // Print the values
    for (int i = 0; i < 5; i++) {
        cout << intPtr[i] << " ";
    }

    free(ptr);  // Free the allocated memory
    return 0;
}*/


/*#include <iostream>
using namespace std;

int main() {
    int* ptr = (int*) calloc(5, sizeof(int));

    if (ptr == NULL) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    // Print values (initially 0)
    for (int i = 0; i < 5; i++) {

        ptr[i] = i;
        cout << ptr[i];
    }

    free(ptr);
    return 0;
}*/

/*#include <iostream>
using namespace std;

int main() {
    int* ptr = (int*) malloc(5 * sizeof(int)); 

    if (ptr == NULL) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 10;
        cout << ptr[i] << " ";
    }

    ptr = (int*) realloc(ptr, 10 * sizeof(int));

    if (ptr == NULL) {
        cout << "\nMemory reallocation failed!" << endl;
        return 1;
    }

    for (int i = 5; i < 10; i++) {
        ptr[i] = i * 10;
    }

    cout << "\nReallocated memory values: ";
    for (int i = 0; i < 10; i++) {
        cout << ptr[i] << " ";
    }

    free(ptr);  
    return 0;
}*/


// #include <iostream>
// #include <cstdlib>  
// using namespace std;

// int main() {
//     int* ptr = (int*) malloc(10 * sizeof(int));

//     if (ptr == NULL) {
//         cout << "Memory allocation failed!" << endl;
//         return 1;
//     }

//     for (int i = 0; i < 10; i++) {
//         ptr[i] = i * 10;
//     }

//     cout << "Original memory values (10 elements): ";
//     for (int i = 0; i < 10; i++) {
//         cout << ptr[i] << " ";
//     }

//     ptr = (int*) realloc(ptr, 5 * sizeof(int));

//     if (ptr == NULL) {
//         cout << "\nMemory reallocation (shrink) failed!" << endl;
//         return 1;
//     }

//     cout << "\nReduced memory values (5 elements): ";
//     for (int i = 0; i < 5; i++) {
//         cout << ptr[i] << " ";
//     }

//     free(ptr);

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Demo {
// public:
//     Demo() {
//         cout << "Constructor Called!" << endl;
//     }
// };

// int main() {
//     Demo obj;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class ElectronicDevice {
// protected:
//     string brand;
//     string model;
//     int price;
//     bool powerStatus;

// public:
//     ElectronicDevice(string b, string m, int p, bool ps)
//         : brand(b), model(m), price(p), powerStatus(ps) {}

//     virtual void powerOn() {
//         powerStatus = true;
//         cout << "Electronic device power is on." << endl;
//     }

//     virtual void powerOff() {
//         powerStatus = false;
//         cout << "Electronic device power is off." << endl;
//     }

//     virtual void showInfo() {
//         cout << "Brand: " << brand
//              << "\nModel: " << model
//              << "\nPrice: " << price
//              << "\nPower Status: " << (powerStatus ? "On" : "Off") << endl;
//     }

//     virtual ~ElectronicDevice() {
//         cout << "Base class destructor called." << endl;
//     }
// };

// class Laptop : public ElectronicDevice {
// public:
//     Laptop(string b, string m, int p, bool ps) : ElectronicDevice(b, m, p, ps) {}

//     void powerOn() override {
//         powerStatus = true;
//         cout << "Laptop is booting up..." << endl;
//     }

//     void powerOff() override {
//         powerStatus = false;
//         cout << "Laptop is shutting down." << endl;
//     }

//     ~Laptop() {
//         cout << "Laptop destructor called." << endl;
//     }
// };

// class Smartphone : public ElectronicDevice {
// public:
//     Smartphone(string b, string m, int p, bool ps) : ElectronicDevice(b, m, p, ps) {}

//     void powerOn() override {
//         powerStatus = true;
//         cout << "Smartphone is starting..." << endl;
//     }

//     void powerOff() override {
//         powerStatus = false;
//         cout << "Smartphone is turning off." << endl;
//     }

//     ~Smartphone() {
//         cout << "Smartphone destructor called." << endl;
//     }
// };

// class Tablet : public ElectronicDevice {
// public:
//     Tablet(string b, string m, int p, bool ps) : ElectronicDevice(b, m, p, ps) {}

//     void powerOn() override {
//         powerStatus = true;
//         cout << "Tablet is powering on..." << endl;
//     }

//     void powerOff() override {
//         powerStatus = false;
//         cout << "Tablet is powering down." << endl;
//     }

//     ~Tablet() {
//         cout << "Tablet destructor called." << endl;
//     }
// };

// int main() {
//     ElectronicDevice* e[] = {
//         new Laptop("HP", "Pavilion", 55000, true),
//         new Smartphone("Samsung", "S21", 30000, true),
//         new Tablet("Apple", "iPad A7", 90000, false)
//     };

//     for (int i = 0; i < 3; i++) {
//         cout << "\n--- Device " << i + 1 << " Info ---" << endl;
//         e[i]->showInfo();
//         e[i]->powerOn();
//         e[i]->powerOff();
//         delete e[i]; // destructor called
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// template <typename T>

// T add(T a, T b)
// {
//     T c = a + b;

//     return c;
// }

// template <typename T>
// T sub(T a, T b)
// {
//     T c = a - b;

//     return c;
// }

// int main()
// {
//     cout << "Addition of two Numbers: " << add(10, 20) << endl;

//     cout << "Addition of two Numbers: " << sub(44, 20) << endl;
// }


// #include <iostream>
// using namespace std;

// template <typename T>
// class Cal
// {
// public:
//     T add(T a, T b)
//     {
//         T c = a+b;
//         return c;
//     }

//     T sub(T a, T b)
//     {
//         T c = a-b;
//         return c;
//     }

//     T Student(T n)
//     {
//         T name = n;
//         return name;
//     }
// };

// int main()
// {
//     // Cal<int> c;
//     Cal<string> c1;
    
//     // cout << "The addition of and b is : " << c.add(10,20)<< endl;
//     // cout << "The addition of and b is : " << c.sub(10,20)<< endl;
//     cout << "Student Name : " << c1.Student("Surya")<< endl;

// }

// #include <iostream>
// using namespace std;
// template<typename T>
// T add(T a, T b) {
//     return a + b;
// }

// int main() {
//     cout << add(5, 10) << endl;      // Works with integers
//     cout << add(5.2, 10.7) << endl;  // Works with floats
// }

// #include <iostream>
// using namespace std;
// template<typename T>
// class Box {
// private:
//     T value;
// public:
//     void setValue(T val) { value = val; }
//     T getValue() { return value; }
// };

// int main() {
//     Box<int> intBox;
//     intBox.setValue(100);
//     cout << intBox.getValue() << endl;

//     Box<string> strBox;
//     strBox.setValue("Hello Templates!");
//     cout << strBox.getValue() << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// // Generic template
// template<typename T>
// class Printer {
// public:
//     static void print(T value) {
//         cout << "General template: " << value << endl;
//     }
// };

// // Specialized template for int
// template<>
// class Printer<int> {
// public:
//     static void print(int value) {
//         cout << "Specialized template for int: " << value << endl;
//     }
// };

// int main() {
//     Printer<double>::print(5.5);  // Calls generic template
//     Printer<int>::print(10);      // Calls specialized template
// }

// #include <iostream>
// using namespace std;

// // Outer template
// template<typename T1, typename T2>
// class Pair {
// public:
//     T1 first;
//     T2 second;

//     Pair(T1 f, T2 s) : first(f), second(s) {}

//     void display() {
//         cout << "Pair: (" << first << ", " << second << ")" << endl;
//     }
// };

// // Nested template
// template<typename T>
// class Container {
// public:
//     Pair<T, T> data;

//     Container(T a, T b) : data(a, b) {}

//     void show() {
//         data.display();
//     }
// };

// int main() {
//     Container<int> intContainer(5, 10);
//     intContainer.show();  // Uses nested Pair template
// }


// #include <iostream>
// using namespace std;

// template<typename T>
// class Box {
// public:
//     T value;
//     Box(T val) : value(val) {}

//     void show() {
//         cout << "Value: " << value << endl;
//     }
// };

// int main() {
//     Box<int> intBox(100);   // Implicit instantiation
//     intBox.show();

//     Box<double> doubleBox(9.99);  // Implicit instantiation
//     doubleBox.show();

//     return 0;
// }

// // Explicit instantiation outside main()
// template class Box<char>;  // Explicitly instantiating Box<char>
 
// #include <iostream>
// using namespace std;

// template<typename T>
// class Point {
// public:
//     T x, y;

//     Point(T a, T b) : x(a), y(b) {}

//     Point operator+(const Point& other) {
//         return Point(x + other.x, y + other.y);
//     }

//     void display() {
//         cout << "(" << x << ", " << y << ")" << endl;
//     }
// };

// int main() {
//     Point<int> p1(3, 4);
//     Point<int> p2(7, 1);
//     Point<int> result = p1 + p2;  // Using overloaded + operator
//     result.display();
// }

// #include <iostream>
// #include <memory>
// using namespace std;

// class Test {
// public:
//     void show() { cout << "Unique pointer example\n"; }
// };

// int main() {
//     unique_ptr<Test> ptr = make_unique<Test>(); // Creates a Test object
//     ptr->show();
//     // Automatically cleaned up when ptr goes out of scope.
// }

// #include <iostream>
// #include <memory>
// using namespace std;

// class Test {
// public:
//     void show() { cout << "Shared pointer example\n"; }
// };

// int main() {
//     shared_ptr<Test> ptr1 = make_shared<Test>(); // Shared ownership
//     shared_ptr<Test> ptr2 = ptr1; // Second reference

//     cout << "Reference Count: " << ptr1.use_count() << endl;
// }

// #include <iostream>
// #include <memory>
// using namespace std;

// class Test {
// public:
//     void show() { cout << "Weak pointer example\n"; }
// };

// int main() {
//     shared_ptr<Test> sharedPtr = make_shared<Test>(); // Shared ownership
//     weak_ptr<Test> weakPtr = sharedPtr; // Weak reference

//     cout << "Reference Count: " << sharedPtr.use_count() << endl; 
// }


// #include <iostream>
// #include <memory>
// using namespace std;

// class Toy {
// public:
//     Toy(string name) : toyName(name) { cout << "Toy '" << toyName << "' created.\n"; }
//     ~Toy() { cout << "Toy '" << toyName << "' destroyed.\n"; }
//     void play() { cout << "Playing with " << toyName << endl; }
// private:
//     string toyName;
// };

// int main() {
//     unique_ptr<Toy> uPtr = make_unique<Toy>("Car");

//     shared_ptr<Toy> sPtr = move(uPtr); // Move ownership

//     sPtr->play();

//     if (!uPtr) cout << "uPtr no longer owns the object.\n"; // Confirm uPtr is null

//     return 0;
// }

// #include <iostream>
// #include <memory>
// using namespace std;

// class Game {
// public:
//     Game(string name) : title(name) { cout << "Game '" << title << "' started.\n"; }
//     ~Game() { cout << "Game '" << title << "' ended.\n"; }
//     void play() { cout << "Playing game: " << title << endl; }
// private:
//     string title;
// };

// int main() {
//     shared_ptr<Game> g1 = make_shared<Game>("Chess");

//     weak_ptr<Game> gWeak = g1; // Weak reference

//     if (auto temp = gWeak.lock()) { temp->play(); } // Safe access

//     g1.reset(); // Destroy the object

//     if (auto temp = gWeak.lock()) { temp->play(); } // Won't run
//     else { cout << "Game already destroyed.\n"; }

//     return 0;
// }

// #include <vector>
// #include <iostream>
// int main() {
//     std::vector<int> numbers = {1, 2, 3, 4};
//     for (auto& num : numbers) {
//         num *= 2; // Double each element
//     }
//     for (auto num : numbers) {
//         std::cout << num << " ";
//     }
// }

// #include <vector>
// #include <iostream>
// int main() {
//     std::vector<int> numbers = {1, 2, 3, 4};
//     for (auto it = numbers.begin(); it != numbers.end(); ++it) {
//         std::cout << *it << " ";
//     }
// }

// #include<iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v = {5, 2, 9, 1};

//     sort(v.begin(), v.end(), [](int a, int b) {
//         return a < b;  // ascending
//     });

//     for (auto n : v)
//         cout << n << " ";
// }


// #include<bits/stdc++.h>
// int main() {
//     auto x = 42; // int
//     std::vector<int> vec = {1, 2, 3};
//     auto it = vec.begin(); // std::vector<int>::iterator
//     for (auto val : vec) { // int
//         std::cout << val << " ";
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>

// int main() {
//     auto num = 42; // Compiler infers `num` as `int`
//     auto pi = 3.1415; // Compiler infers `pi` as `double`
//     auto text = "Hello, World!"; // Compiler infers `text` as `const char*`

//     std::vector<int> numbers = {1, 2, 3, 4, 5};

//     // Using `auto` in a loop
//     for (auto element : numbers) {
//         std::cout << element << " ";
//     }

//     // Printing other auto-inferred variables
//     std::cout << "\nnum: " << num << std::endl;
//     std::cout << "pi: " << pi << std::endl;
//     std::cout << "text: " << text << std::endl;

//     return 0;
// }

// #include <vector>
// #include <iostream>
// int main() {
//     std::vector<int> numbers = {1, 2, 3, 4};
//     for (auto& num : numbers) {
//         num *= 2; // Modify elements
//     }
//     for (const auto num : numbers) {
//         std::cout << num << " "; 
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>

// int main() {
//     std::string text = "Hello";

//     for (auto ch : text) {
//         std::cout << ch << " ";
//     }

//     return 0;
// }

// #include <algorithm>
// #include <vector>
// #include <iostream>
// int main() {
//     std::vector<int> vec = {5, 2, 9, 1};
//     std::sort(vec.begin(), vec.end(), [](int a, int b) { return a < b; });
//     for (auto x : vec) {
//         std::cout << x << " "; 
//     }
//     return 0;
// }

// #include <iostream>
// constexpr int factorial(int n) {
//     return n <= 1 ? 1 : n * factorial(n - 1);
// }
// int main() {
//     constexpr int result = factorial(5); // Computed at compile time
//     std::cout << result << std::endl; 
//     int arr[result]; // Valid: result is a compile-time constant
//     return 0;
// }

// #include <tuple>
// #include <iostream>
// #include <string>
// std::tuple<int, std::string, double> getData() {
//     return {42, "Hello", 3.14};
// }
// int main() {
//     auto [id, name, value] = getData(); // Structured bindings (C++17)
//     std::cout << id << ", " << name << ", " << value << std::endl;
//     return 0;
// }

// #include <iostream>
// enum class Color { Red, Green, Blue };
// enum class Status : int { Active = 1, Inactive = 0 };
// int main() {
//     Color c = Color::Red;
//     // int x = c; // Error: no implicit conversion
//     if (c == Color::Red) {
//         std::cout << "Red color" << std::endl;
//     }
//     std::cout << static_cast<int>(Status::Active) << std::endl; // Prints: 1
//     return 0;
// }   

#include<iostream>
using namespace std;

int main()
{
    int num1, num2, sum;

    num1 = 10;
    num2 = 20;
    sum = num1 + num2;

    cout << sum << endl;
}