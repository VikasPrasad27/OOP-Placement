#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// using recursion
int fib(int n){
    if(n<=1){
        return n;
    }

    return fib(n-1)+fib(n-2);
}

int Dpfib(int n, vector<int> &dp){
    if(n<=1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }

    return dp[n]=Dpfib(n-1,dp)+Dpfib(n-2,dp);

}
// In DP we use memoization to store the values of fibonnaci series, 
// every time we call the function we check if the value is already calculated or not, if yes then we return that value otherwise we calculate it and store it in the array.

int main(){
    // int n;
    // cin>>n;
    // cout<<fib(n);
    int n=6;
    vector<int> dp(n+1,-1);
    cout<<Dpfib(n,dp);
    return 0;
}