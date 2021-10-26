//https://leetcode.com/problems/contains-duplicate
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>hash;
        for(int num:nums){
            if(hash[num]>0)return true;
            hash[num]++;
        }return false;
    }
};