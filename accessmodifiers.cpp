//private- data & methods accessible inside class --- By deafult private in cpp
//public- accessible anywhere
//protected- data & methods accessible inside class & its derived class

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