//https://leetcode.com/problems/number-of-1-bits/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
       uint32_t result=n;int ans=0;
        for(int i=0;i<32;i++){
            if(((result)&1))ans++;
             result=result>>1;
        }
        return ans;
    }
};