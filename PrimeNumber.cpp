#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n<2)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}

int main(){
    for(int i=1;i<100;i++){
        if(isPrime(i)){
            cout<<"Prime:"<<i<<" ";
        }
    }
    return 0;
}