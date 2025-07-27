//Encapsulation is wrapping up data & member functions in a single unit called class 
//Used for data hiding using access modifiers

// 1 of the 4 pillar of OOP(encapsulation,polymorphism,inheritance,)

#include <iostream>
using namespace std;

class teacher{
    private:
      int age;
      int salary;
    public:
      string dept;
      //setter - used to set private values
      void setsalary(int s){
        salary=s;
      }
      //getter - used to get private values
      int getsalary(){
        return salary;
      }
};

int main(){
    teacher t1;
    t1.setsalary(1000);
    cout<<t1.getsalary();
    return 0;
}