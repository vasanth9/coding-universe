//https://leetcode.com/problems/jump-game-ii/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int DP[n+1];
        DP[n]=0;
        DP[n-1]=0;
        int last=n-1;
        
        for(int i=n-2;i>=0;i--){
            if(i+nums[i]>=last){
               
                DP[i]=1;
            }
            else{
                int z=nums[i]+i;
                cout<<i<<" "<<z<<"\n";
               int m=n+100;
                for(int j=i+1;j<=z;j++){
                    if(DP[j]<m)m=DP[j];
                }
                
                DP[i]=1+m;
            }
        }
        for(int x:DP){
            cout<<x<<" ";
        }
        return DP[0];
    }
};