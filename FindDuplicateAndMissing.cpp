/*
A problem that was asked in OA we are given an array we need to find one missing number and repeated number from that array.

Input
[2,2,3]

Output
1 2
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={1,2,3,4,5,6,7,7,8,9};

    int n=arr.size();
    vector<int> freq(n+1,0);
    vector<int>ans;

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int missing=-1,repeated=-1;

    for(int i=1;i<=n;i++){
        if(freq[i]==0){
            missing=i;
        }else if(freq[i]>1){
            repeated=i;
        }
    }
    cout<<missing<<" "<<repeated<<endl;
    return 0;
}