// Map is used for storing key-values pairs there are two types ordered and unordered map
// Hashing - prestore something and then fetch - Map can also be used 
#include <iostream>
#include<unordered_map>
using namespace std;

int main(){
    int nums[]={1,3,4,2,1,4};
    unordered_map<int,int>mp;
    for(int it : nums){
        mp[it]++;
    }

    for(auto i:mp){
        if(i.second>=2){
            cout<<i.first<<" ";
        }
    }
    return 0;
}