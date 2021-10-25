//https://leetcode.com/problems/merge-sorted-array/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        m=m-1;n=n-1;int x=m+1+n;
        while(n>=0){
              nums1[x--]=m>=0&&nums1[m]>nums2[n]?nums1[m--]:nums2[n--];
            }
       
    }
};