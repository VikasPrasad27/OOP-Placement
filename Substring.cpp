#include <iostream>
using namespace std;

//TIME-0(N^2) , SPACE - 0(1)
int main(){
    string s="aabcba";
    int n=s.length();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<s[j];
        }
        cout<<endl;
    }
    return 0;
}

//USING SPACE - 0(N)  TIME-0(N^2)
/*
#include <iostream>
#include<vector>
using namespace std;

int main(){
    string s="aabcba";
    int n=s.length();
    for(int i=0;i<n;i++){
        vector<char>sp;
        for(int j=i;j<n;j++){
            sp.push_back(s[j]);
        }
        for(auto it:sp){
            cout<<it<<"";   
    }
    cout<<endl;
    }
    
    return 0;
}
*/