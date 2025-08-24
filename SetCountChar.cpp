//count char in a string & remove duplicates if there
//problem in someones placement round

#include<iostream>
#include<set>
using namespace std;

int main(){
    string name="vikasprasad";
    int count=0;
    set<char> st;

    for(int i=0;i<name.length();i++){
        count++;
        st.insert(name[i]);
    }
    cout<<count;
    for(auto it:st){
        cout<<it;
    }
    return 0;
}