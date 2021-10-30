//https://leetcode.com/problems/summary-ranges/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        int n=nums.size();
        int i=0;
        while(i<n){
            string x=to_string(nums[i]);
            while(i<n-1&&nums[i+1]==nums[i]+1){
                i++;
            }
           string z=to_string(nums[i]);
            if(x==z){
                ans.push_back(x);
            }
            else ans.push_back(x+"->"+z);
            i++;
        }
        return ans;
    }
};