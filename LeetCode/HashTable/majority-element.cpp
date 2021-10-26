
//https://leetcode.com/problems/majority-element
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement1(vector<int>& nums) {
        map<int,int>hash;
        int n=nums[0],min=0;
        for(int x:nums){
            hash[x]++;
            if(hash[x]>min){min=hash[x];n=x;}
        }
        return n;
    }
    int majorityElement(vector<int>& nums) {
       
        int count=0,candidate;
        for(int x:nums){
           if(count==0)candidate=x;
            count+=x==candidate?1:-1;
        }
        return candidate;
    }
};