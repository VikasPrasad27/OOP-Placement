//STL - Standard Template Library its divided into 4 parts 1)Algorithms 2)Containers 3)Functions 4)Iterators
//1)Algorithms - they are basically inbuilt function to make our work easy like sort etc, we dont need to write that code

#include <iostream>
#include<algorithm> //include this for algorithms
using namespace std;

void algo(){
    sort(a,a+n);//(start,end)
    sort(v.begin(),v.end());//vector
    
    sort(a+2,a+4);//(start,end)
    sort(a,a+n,grater<int>);//to sort in descending order

    string s="123";
    sort(s.begin(),s.end());
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

    int maxi = *max_element(a,a+n);//(start,end)
}

int main(){
    
    return 0;
}