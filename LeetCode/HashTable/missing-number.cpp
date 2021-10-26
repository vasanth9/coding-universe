//https://leetcode.com/problems/missing-number
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber1(vector<int>& nums) {
        int n=nums.size();
        int sum=(n*(n+1))/2;
        int allsum=accumulate(nums.begin(),nums.end(),0);
        cout<<sum<<" "<<allsum;
        return sum-allsum;
    }
    public:
    int missingNumber(vector<int>& nums) {
        int result=0,i=1;
        for(int num:nums){
            result^=num;
            result^=i;
            i++;
        }
        return result;
    }
};