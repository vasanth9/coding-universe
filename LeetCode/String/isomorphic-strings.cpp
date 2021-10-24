//https://leetcode.com/problems/isomorphic-strings
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>isomorph;
        map<char,char>isomorph2;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(isomorph.count(s[i])==0&&isomorph2.count(t[i])==0){
                isomorph2[t[i]]=s[i];
                isomorph[s[i]]=t[i];
            }else if(isomorph[s[i]]==t[i]){}
            else return false;
        }
        return true;
    }
};