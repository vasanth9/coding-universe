//https://leetcode.com/problems/h-index/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int n=citations.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(citations[i]>=n-i)return n-i;
        }
        return count;
    }
};