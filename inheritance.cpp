//When member functions & methods of a base class are passed on to the derived class.
//Used for code reusability
//1)parent class constructor then child class constructor && Destructor reverse order;
//learn mode of inheritance
//types:1)single-level 2)multiple 3)hierarchical 4)hybrid 

#include <iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;

    // Person(string name,int age){
    //     this->name=name;
    //     this->age=age;
    // }
    Person(){

    }

};

class Student : public Person{
    public:
    int rollno;

    void getinfo(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"rollno:"<<rollno<<endl;
    }
};
int main(){
    Student s1;
    s1.name="vikas";
    s1.age=21;
    s1.rollno=59;
    s1.getinfo();
    return 0;
}