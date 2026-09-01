/*
213. House Robber II
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. All houses at this place are arranged in a circle. That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

Example 1:
Input: nums = [2,3,2]
Output: 3
Explanation: You cannot rob house 1 (money = 2) and then rob house 3 (money = 2), because they are adjacent houses.

intution - using dp
1)we create a helper function which will take the start and end index of the array and return the maximum amount of money we can rob from that range.
2)we call the helper function twice, one for the first house and one for the last house.
3)we compare the two results and return the maximum of the two.

We include 1st house and exclude last house
We include last house and exclude first house
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int helper(vector<int>&nums, int st, int end){
        int n=nums.size();
        vector<int>dp(n-1);

        dp[0]=nums[st];
        dp[1]=max(nums[st],nums[st+1]);

        for(int i=st+2, j=2;i<=end;i++,j++){
            dp[j]=max(dp[j-1],dp[j-2]+nums[i]);
        }

        return dp[n-2];
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0],nums[1]);

        return max(helper(nums,0,nums.size()-2),helper(nums,1,nums.size()-1));
    }
};