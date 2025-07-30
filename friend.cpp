//A friend function in C++ is a function that is not a member of a class but has access to its private and protected members.

//WHY USE FRIEND-Sometimes, you want an external function to access the internals of a class (e.g., operator overloading, two-class interaction) without making all members public.

#include<iostream>
using namespace std;
class B;

class A {
private:
    int a;

public:
    A(int x) : a(x) {}
    friend void sum(A, B); //friend
};

class B {
private: 
    int b;

public:
    B(int y) : b(y) {}
    friend void sum(A, B); 
};

void sum(A obj1, B obj2) {
    cout << "Sum: " << obj1.a + obj2.b << endl; // access both private members
}
int main(){
    sum(5,6);
    return 0;
}