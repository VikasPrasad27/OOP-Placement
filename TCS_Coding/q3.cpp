/*
Question #3: Word is the key 
One programming language has the following keywords that cannot be used as 
identifiers: 
break, case, continue, default, defer, else, for, func, goto, if, map, range, return, 
struct, type, var 
Write a program to find if the given word is a keyword or not 
Input #1: 
defer 
Output: 
defer is a keyword
*/

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str[16][10]={"break", "case", "continue", "default", "defer", "else","for",  
    "func", "goto", "if", "map", "range", "return", "struct", "type", "var"};
    char input[20];
    cin>>input;
    int flag =0;
    for(int i=0;i<16;i++){
        if(strcmp(input,str[i])==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<input<<" is a keyword";
    }else{
        cout<<input<<" is not a keyword";
    }
    return 0;
}