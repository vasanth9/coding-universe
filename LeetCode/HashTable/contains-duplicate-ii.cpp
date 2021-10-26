//https://leetcode.com/problems/contains-duplicate-ii/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>hash;
       int i=0;
        for(int num:nums){
            if(hash.count(num)!=0){
                if(abs(hash[num]-i)<=k)return true;
               
            }
             hash[num]=i;i++;
        }
    return false;}
};