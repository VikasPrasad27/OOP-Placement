/*
2958. Length of Longest Subarray With at Most K Frequency
You are given an integer array nums and an integer k.
The frequency of an element x is the number of times it occurs in an array.
An array is called good if the frequency of each element in this array is less than or equal to k.
Return the length of the longest good subarray of nums.
A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:

Input: nums = [1,2,3,1,2,3,1,2], k = 2
Output: 6

Intution:
1) We can use a sliding window approach to find the longest good subarray.
2) We will maintain a frequency map to keep track of the frequency of each element in the current window.
3) We will expand the window by moving the right pointer and update the frequency map.
4) If the frequency of any element exceeds k, we will shrink the window from the left
5) We will keep track of the maximum length of the good subarray found so far.

TC - Each Element will be visited at most Twice - O(n)
SC - O(n)
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i=0,j=0;
        int result=0;

        unordered_map<int,int>mp;

        while(j<nums.size()){
            mp[nums[j]]++;

            while(i<j && mp[nums[j]]>k){
                mp[nums[i]]--;
                i++;
            }
            result=max(result,j-i+1);
            j++;
        }
        return result;
    }
};