#include <iostream>
using namespace std;
// code to find number of characters in string excluding white-spaces.
// int main()
// {
//         int cnt = 0, ans = 0;
//         string name="hello hello hello";
//         for (auto ch : name)
//         {
//             if (ch >= 'a' && ch <= 'z')
//             {
//                 cnt++;
//             }
//             ans = cnt;
//         }
//         cout<<ans;
//     return 0;
// }


//Code to reverse a String -  TC:0(n)
int main(){
    string s="hello";
    int size=s.length();
    int i=0,j=size-1;
    cout<<s<<endl;
    while(i<=j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<s<<endl;
    return 0;
}