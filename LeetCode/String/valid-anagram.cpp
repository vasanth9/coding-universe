//https://leetcode.com/problems/valid-anagram 
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>smap;
        int sl=s.length(),tl=t.length();
        if(sl!=tl)return false;
        
        for(int i=0;i<sl;i++){
           smap[s[i]]++;
           smap[t[i]]--;
        }
        for(auto x:smap)if(x.second!=0)return false;
        return true;
    }
};