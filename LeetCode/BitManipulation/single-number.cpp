//https://leetcode.com/problems/single-number/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=nums[0],n=nums.size();
        for(int i=1;i<n;i++)ans^=nums[i];
        return ans;
       
    }
};