#include <iostream>
using namespace std;
// code to find number of characters in string excluding white-spaces.
int main()
{
        int cnt = 0, ans = 0;
        string name="hello hello hello";
        for (auto ch : name)
        {
            if (ch >= 'a' && ch <= 'z')
            {
                cnt++;
            }
            ans = cnt;
        }
        cout<<ans;
    return 0;
}