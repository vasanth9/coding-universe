//https://leetcode.com/problems/house-robber-ii
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        int DP[n+3],KP[n+3];
        DP[n+2]=0;KP[n+2]=0;
        DP[n+1]=0;KP[n+1]=0;
        DP[n]=0;KP[n]=0;
        DP[n-1]=0;
        for(int i=n-2;i>=0;i--){
            DP[i]=nums[i]+max(DP[i+2],DP[i+3]);
        }
         for(int i=n-1;i>0;i--){
            KP[i]=nums[i]+max(KP[i+2],KP[i+3]);
        }
        return max(max(DP[0],DP[1]),max(KP[1],KP[2]));
    }
};