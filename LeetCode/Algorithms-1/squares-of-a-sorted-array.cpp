//https://leetcode.com/problems/squares-of-a-sorted-array/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       vector<int>square;
       int n=nums.size();n--;
       int k=0;
       while(k<n){
           long long int sq=nums[n]*nums[n],st=nums[k]*nums[k];
           if(sq>st){
               square.push_back(sq);
               n--;
           }
           else if(sq==st){
               square.push_back(sq);
               square.push_back(st);
               n--;k++;
           }
           else{
               square.push_back(st);
              k++;
           }
       }
    if(k==n){
          long long int st=nums[k]*nums[k];
        square.push_back(st);
    }
    reverse(square.begin(),square.end());
    return square;
    }
};