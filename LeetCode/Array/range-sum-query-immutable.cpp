//https://leetcode.com/problems/range-sum-query-immutable/
#include<bits/stdc++.h>
using namespace std;
class NumArray {
private:
    vector<int>NumPy;
public:
    NumArray(vector<int>& nums) {
       int ans=0;
    for(int x:nums){
       
        NumPy.push_back(ans);
         ans=ans+x;
    }
    NumPy.push_back(ans);
        
    }
    
    int sumRange(int left, int right) {
        return NumPy[right+1]-NumPy[left];
    }

};