// #include <iostream>
// using namespace std;

// int fib(int n){
//     if(n<=1){
//         return n;
//     }
//     return fib(n-1)+fib(n-2);
// }

// int main(){
//     int n;
//     cout<<"ENTER INDEX TILL WHICH TO GENERATE:";
//     n=6;

//     for(int i=0;i<n;i++){
//         cout<<fib(i);
//     }
//     return 0;
// }


//NON RECURSIVE - ITERATIVE
#include<iostream>
using namespace std;

void fib(int n){
    int a=0,b=1,next;
    for(int i=0;i<=n;i++){
        cout<<a<<" ";
        next=a+b;
        a=b;
        b=next;
    }
}
int main(){
    cout<<"ENTER NUMBER TILL WHICH TO GENERATE";
    int n;
    n=6;
    fib(n);
    return 0;
}