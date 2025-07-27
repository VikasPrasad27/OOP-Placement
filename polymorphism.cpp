//Polymorphism is ability of objects to take on different forms or behave in different ways depending on the context which they are used.(ex:constructor overloading)
//Compile time - function overloading
//Run time/dynamic - 1)function overriding(inheritance) - Parent & child both contain the same function with diff implementation - Parent class function is said to be overridden.
//2)virtual functions - means if we derive some function in parent class we can again declare in child class uses virtual keyword.

#include <iostream>
using namespace std;
class Printing{
    public:
    string name;

    //1) non-parameterized constructor
    Printing(){
        cout<<"HI i am constructor";
    }

    //2) parameterized constructor
    Printing(string name){  
        this->name=name;
        cout<<name;
    }

    //function overloading
    void show(int x){
        cout<<x;
    }
    void show(char c){
        cout<<c;
    }

};

int main(){
    Printing p1("vikas");
    Printing p2;
    p2.show(4);
    p2.show('c');
    return 0;
}