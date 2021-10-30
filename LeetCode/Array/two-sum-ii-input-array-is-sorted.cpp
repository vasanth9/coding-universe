//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int n=numbers.size();
        int start=0,end=n-1;
        while(start<end){
            if(numbers[start]+numbers[end]==target){
                
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            }
            else if(numbers[start]+numbers[end]>target)end--;
            else start++;
        }
        return ans;
    }
};