/*
Question #10: 
A supermarket maintains a pricing format for all its products. A value N is printed on each 
product. When the scanner reads the value N on the item, the product of all the digits in the value 
N is the price of the item. The task here is to design the software such that given the code of any 
item N the product (multiplication) of all the digits of value should be computed(price).

Example 1: 
Input : 
5244 -> Value of N 
Output : 
160 -> Price 
*/
#include<iostream>
using namespace std;

int main(){
    string n;
    cin>>n;
    int sum =1;
    for(auto i:n){
        sum*=i-'0';
    }
    cout<<sum;
    return 0;
}