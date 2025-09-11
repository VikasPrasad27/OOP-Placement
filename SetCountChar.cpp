// //count char in a string & remove duplicates if there
// //problem in someones placement round

// #include<iostream>
// #include<set>
// using namespace std;

// int main(){
//     string name="vikasprasad";
//     int count=0;
//     set<char> st;

//     for(int i=0;i<name.length();i++){
//         count++;
//         st.insert(name[i]);
//     }
//     cout<<count;
//     for(auto it:st){
//         cout<<it;
//     }
//     return 0;
// 

// Count Char without whitespaces
#include <iostream>
using namespace std;

int main(){
    string name="Hello World";
    int cnt=0;
    for(auto ch:name){
        if(ch != ' '){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}