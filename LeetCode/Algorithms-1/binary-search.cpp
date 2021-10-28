//https://leetcode.com/problems/binary-search/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start =0, n=nums.size(),end=n-1,mid;  mid=(start+end)/2;
       
        while(start<end){
           
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            } mid=(start+end)/2;
            
        }
        if(nums[mid]==target)return mid;
        return -1;
    }
};