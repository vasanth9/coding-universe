//https://leetcode.com/problems/longest-common-prefix
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result="";
        int n=strs.size();
        if(n==1)return strs[0];
        string z=strs[0];
        for(int i=1;i<n;i++){
            result="";
            int p=z.length(),q=strs[i].length(),k=0,l=0;
            while(k<p&&l<q&&z[k]==strs[i][l]){
            result=result+z[k];
                k++;l++;
            }z=result;
        }
        return result;
    }
};