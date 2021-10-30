//https://leetcode.com/problems/house-robber/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int DP[n+3];
        DP[n+2]=0;
        DP[n+1]=0;
        DP[n]=0;
        for(int i=n-1;i>=0;i--){
            DP[i]=nums[i]+max(DP[i+2],DP[i+3]);
        }
        return max(DP[0],DP[1]);
    }
};