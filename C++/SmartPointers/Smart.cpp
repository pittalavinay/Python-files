// #include<iostream>
// #include<memory>
// using namespace std;

// class A
// {
// public:
//     A()
//     {
//         cout << "A's constructor" << endl;
//     }
//     ~A()
//     {
//         cout << "A's destructor" << endl;
//     }

//     void amethod()
//     {
//         cout << "A's method" << endl;
//     }
// };

// class B
// {
// public:
//     B()
//     {
//         cout << "B's constructor" << endl;
//     }
//     ~B()
//     {
//         cout << "B's constructor" << endl;
//     }
//     void bmethod()
//     {
//         cout << "B's method" << endl;
//     }
// };

// class C
// {
// private:
//     unique_ptr<A> ptr1;
//     unique_ptr<B> ptr2;

// public:
//     C()
//     {
//         ptr1 = make_unique<A>();
//         ptr2 = make_unique<B>();
//         cout << "C's constructor" << endl;
//         if(ptr1) ptr1->amethod();
//         if(ptr2) ptr2->bmethod();
//     }
//     ~C()
//     {
//         cout << "C's constructor" << endl;
//     }
//     void cmethod()
//     {
//         cout << "c's method" << endl;
//     }
// };

// int main()
// {
//     C c;
//     c.cmethod();
// }