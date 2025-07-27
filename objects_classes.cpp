#include <iostream>
using namespace std;

//objects are entities in the real world - teacher,pen,student
//clases are blueprint of these entities

//constructor - special method invoked automatically at the time of object creation.Used for initialiation
class Printing{
    public:
    Printing(){
        cout<<"HI i am constructor";
        dep="cs";// initialize before hand
    }
    //attributes
    string name;
    string dep;

    //methods / member functions
    void print(){
        cin>>name;
        cout<<"hi i am from the class printing your name is:"<<name;
    }
};

int main(){
    //object
    Printing p;//constructor call
    p.print();
    return 0;
}