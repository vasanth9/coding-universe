//https://leetcode.com/problems/length-of-last-word
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        while(s[n-1]==' '){
            n--;
        }
        int x=0;
        while(n>0&&s[n-1]!=' '){x++;n--;}
        return x;
    }
};