//https://leetcode.com/problems/intersection-of-two-arrays-ii
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         map<int,int>hash;
        for(int num:nums1){
            hash[num]++;
        }
        vector<int>result;
        for(int num:nums2){
            if(hash[num]>0){
                result.push_back(num);
                hash[num]--;
            }
        }
        return result;
    
    }
};