//https://leetcode.com/problems/delete-and-earn/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n=10001;
        vector<int>v(n,0);
        for(int x:nums)v[x]+=x;
        int take=0,skip=0;
        for(int x:v){
            int temp=max(skip+(x),take);
            skip=take;
            take=temp;
        }
        return max(take,skip);
    }
};