//https://leetcode.com/problems/two-sum/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>hashnums;
        int n=nums.size();
        vector<int>result;
        for(int i=0;i<n;i++){
            int need=target-nums[i];
            if(hashnums.count(need)==0){
                hashnums[nums[i]]=i;
            }
            else{
                
                result.push_back(i);
                result.push_back(hashnums[need]);
                return result;
            }
        }
        return result;
    }
};
