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

// class Student {
// public:
//     int id;
//     string name;

//     Student(int i, string n) {
//         id = i;
//         name = n;
//     }

//     void display() {
//         cout << id << " " << name << endl;
//     }
// };

// int main() {
//     Student s1(101, "Surya");
//     s1.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Test {
// public:
//     Test() {
//         cout << "Constructor called" << endl;
//     }

//     ~Test() {
//         cout << "Destructor called" << endl;
//     }
// };

// int main() {
//     Test t1;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Base {
// public:
//     virtual ~Base() {
//         cout << "Base Destructor\n";
//     }
// };

// class Derived : public Base {
// public:
//     ~Derived() {
//         cout << "Derived Destructor\n";
//     }
// };

// int main() {
//     Base* b = new Derived();
//     delete b;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     auto x = 5;
//     cout << x << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     register int count = 10;
//     for (register int i = 0; i < count; i++) {
//         cout << i << " ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void counter() {
//     static int count = 0;
//     count++;
//     cout << "Count: " << count << endl;
// }

// int main() {
//     counter();
//     counter();
//     counter();
//     return 0;
// }

// File1.cpp
// #include <iostream>
// using namespace std;

// int num = 100;

// // File2.cpp
// #include <iostream>
// using namespace std;

// extern int num;

// int main() {
//     cout << "Extern num: " << num << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Demo {
// public:
//     mutable int x;

//     Demo() {
//         x = 10;
//     }

//     void change() const {
//         x = 20;
//     }
// };

// int main() {
//     const Demo d;
//     d.change();
//     cout << "x: " << d.x << endl;
//     return 0;
// }

// #include <iostream>
// #include <thread>
// using namespace std;

// thread_local int counter = 0;

// void task() {
//     counter++;
//     cout << "Counter in thread: " << counter << endl;
// }

// int main() {
//     thread t1(task);
//     thread t2(task);
//     t1.join();
//     t2.join();
//     return 0;
// }
