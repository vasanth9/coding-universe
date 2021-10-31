//https://leetcode.com/problems/reverse-words-in-a-string-iii/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int l=s.length();
        int j=0;
        for(int i=0;i<l;i++){
            if(s[i]==' '){
                reverse(s.begin()+j,s.begin()+i);
                j=i+1;
            }
        }
        reverse(s.begin()+j,s.end());
        return s;
    }
};