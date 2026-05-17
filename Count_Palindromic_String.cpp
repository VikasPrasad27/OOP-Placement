/*
Count palindrome strings in a vector/array of strings
Input: {"abc","car","ada","racecar","cool"}
Output: 2

WE CAN USE 2 METHODS USING REVERSE FUNCTION FOR CHECKING PALINDROME OR LOOP VERSION

Time Complexity:  O(n * m)
Space Complexity: O(1)

*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;

        while (i < j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }

    int countPalindrome(vector<string>& words) {
        int cnt = 0;

        for (string &s : words) {
            if (isPalindrome(s)) {
                cnt++;
            }
        }

        return cnt;
    }
};

int main() {
    Solution s;

    vector<string> words = {
        "abc", "car", "ada", "racecar", "cool"
    };

    cout << s.countPalindrome(words);

    return 0;
}