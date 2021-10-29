//https://leetcode.com/problems/min-cost-climbing-stairs/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int DP[n+2];
        DP[n+1]=0;
        DP[n]=0;
        for(int i=n-1;i>=0;i--){
            DP[i]=cost[i]+min(DP[i+1],DP[i+2]);
        }
        return min(DP[0],DP[1]);
    }
};