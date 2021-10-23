//https://leetcode.com/problems/array-partition-i
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       auto sum=0;int n=nums.size();
        for(int i=0;i<n;i=i+2){
            sum+=nums[i];
        }
        return sum;
    }
};