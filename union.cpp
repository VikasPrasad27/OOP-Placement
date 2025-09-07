#include <iostream>
#include <set>
using namespace std;

void findunion(){
    int arr1[]={1,3,4,5,10};
    int arr2[]={1,2,6,7,8};
    set<int>st;

    int i=0;
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int n1=sizeof(arr2)/sizeof(arr2[0]);
    int j=0;

    while(i<n && j<n1){
        st.insert(arr1[i]);
        st.insert(arr2[j]);
        i++;
        j++;
    }

    for(auto it:st){
        cout<<it<<" ";
    }
}

int main(){
    findunion();
    return 0;
}