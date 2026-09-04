/*
Min Size Subarray Sum
Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

Example 1:
Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
    int minSubArrayLen(int target, vector<int>& nums) {
       int start =0,end=0,n=nums.size();
       int total=0;

       while(end<n){
        total+=nums[end];
        while(total>=target){
            total=min(total,end-start+1);
            total-=nums[start];
            start++;
        }
        end++;
       }
       return total == INT_MAX ? 0 : total;
    }
};

int main() {
    int n,target;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++) cin>>nums[i];
    cout<<"Enter the target value:";
    cin>>target;
    Solution obj;
    cout<<obj.minSubArrayLen(target,nums);
    return 0;
}