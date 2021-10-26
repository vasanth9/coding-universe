//https://leetcode.com/problems/ransom-note
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>hash;
        for(char c:magazine){
            hash[c]++;
        }
        for(char c:ransomNote){
            if(--hash[c]<0)return false;
            
            
        }return true;
    }
};