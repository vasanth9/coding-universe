//https://leetcode.com/problems/jump-game
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        bool DP[n+1];
        DP[n-1]=true;
        DP[n]=true;
        int last=n-1;
        for(int i=n-1;i>=0;i--){
            if(i+nums[i]>=last)
                   DP[i]=true;
            else{ 
                int z=i+nums[i];
                bool x=false;
                for(int j=i+1;j<=z;j++){
                    x=x or DP[j];
                }
                
               // cout<<x<<" "<<i<<"\n";
                
                
                DP[i]=x;
            
            
            }
        }
        return DP[0];
    }
};