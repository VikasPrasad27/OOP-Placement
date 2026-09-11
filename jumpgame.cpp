/*
Jump Game

You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.
Return true if you can reach the last index, or false otherwise.

Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.

1)We iterate through the array
2)store index+current number
3)If I've reached an index that is beyond my current maximum reachable position, there is no way to get here, so the last index cannot be reached
3)at last if we can reach the last index, return true
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reachable = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (i > reachable) return false; //3rd point
            reachable = max(reachable, i + nums[i]);
        }
        return true;
    }
};
