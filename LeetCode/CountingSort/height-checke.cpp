//https://leetcode.com/problems/height-checker/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>expected=sorted_vector(heights);
        int n=heights.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(heights[i]!=expected[i])count++;
        }
        return count;
    }
    private: vector<int> sorted_vector(vector<int>height){
        sort(height.begin(),height.end());
        return height;
    }
};