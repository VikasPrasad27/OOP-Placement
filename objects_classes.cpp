#include <iostream>
using namespace std;

//objects are entities in the real world - teacher,pen,student
//clases are blueprint of these entities

//constructor - special method invoked automatically at the time of object creation.Used for initialiation

//Destructor - Deallocate memmory , automatically deallocated if not called, But only static we have to delete memory created dynamically (ex: using new keyword);
class Printing{
    public:
    //attributes
    string name;
    string dep;

    //1) non-parameterized constructor
    Printing(){
        cout<<"HI i am constructor";
        dep="cs";// initialize before hand
    }

    //2) parameterized constructor
    Printing(string n){  
        name=n;        //phenomena of using 2constructor together is called as constructor overloading
    }                  //and it is also example of polymorphism

    //methods / member functions
    void print(){
        cout<<"hi i am from the class printing your name is:"<<name;
    }

    //destructor
    ~Printing(){
        cout<<"Deleting";
    }
};

int main(){
    //object
    Printing p1("vikas");//constructor call
    //p1.print();

    //copy constructor- Special Constructor used to copy properties of one object into another.
    Printing p2(p1);
    p2.print();
    return 0;
}

//A Shallow copy of an object copies all member value from one object to another

//Deep copy, on the another hand , not only copies the member value but also make copies of dynamicalyy allocated memory  that the member points to