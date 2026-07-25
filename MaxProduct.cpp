/*
Given a integer find max product
ex: n=331
max product =6 (3*3)

1) Convert the integer to string
2) Sort the string to get the digits in order
3) Loop through the string and calculate the product of adjacent digits
4) Return the maximum product
*/
#include <iostream>
using namespace std;

class Solution {
public:
    int maxProduct(int n) {
        int ans = 0;
        string nums = to_string(n);

        for (int i = 0; i < nums.size() - 1; i++) {
            int product = (nums[i] - '0') * (nums[i + 1] - '0');
            ans = max(ans, product);
        }

        return ans;
    }
};


int main(){
    Solution sol;
    int n = 331;

    cout << sol.maxProduct(n);

    return 0;
}