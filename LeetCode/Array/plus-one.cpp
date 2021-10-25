//https://leetcode.com/problems/plus-one/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0,add=1;int n=digits.size();
        for(int i=n-1;i>=0;i--){
            int x=add+carry+digits[i];
            digits[i]=x%10;
            carry=x/10;
            add=0;
        }
        vector<int>results;
        if(carry>0)results.push_back(carry);
        for(int i:digits){
            results.push_back(i);
        }
        return results;
    }
};