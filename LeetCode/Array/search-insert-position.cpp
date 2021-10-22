//https://leetcode.com/problems/search-insert-position/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int result=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<target)result++;
            else if(nums[i]==target)return i;
        }return result;
    }
};