//https://leetcode.com/problems/maximum-subarray
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(),sum=0,ans=nums[0];
        for(int i=0;i<n;i++){
            sum+=nums[i];
            ans=max(sum,ans);
            sum=max(sum,0);
        }
        return ans;
    }
};