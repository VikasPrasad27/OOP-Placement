/*
3090. Maximum Length Substring With Two Occurrences
Given a string s, return the maximum length of a substring such that it contains at most two occurrences of each character.
 
Example 1:
Input: s = "bcbbbcba"
Output: 4

- Use same 2 ponter approach

TC- O(n)
SC -O(n)
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumLengthSubstring(string s) {
        int i=0,j=0;
        int sum=0;
        unordered_map<int,int>mp;
        while(j<s.length()){
            mp[s[j]]++;
            while(i<j && mp[s[j]]>2){
                mp[s[i]]--;
                i++;
            }
            sum=max(sum,j-i+1);
            j++;
        }
        return sum;
    }
};