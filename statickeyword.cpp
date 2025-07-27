//1)Static variable - variable declared as static in a function are created & initialized once for the lifetime of progran. (IN FUNCTION)
//Static Variable declared as static in a function are created & initialized once. They are shared by al the objects of the class. (IN CLASS)

//2)Static Objects - Runs lifetime of program

#include <iostream>
using namespace std;

void fun(){
    // int x=0;  runs always and prints 0 even if we call fun() more than once.
    static int x=0;  // runs only once 
    cout<<"x = "<<x<<endl;
    x++;
}
int main(){ 
    fun();
    fun();
    fun();
    return 0;
}