//https://leetcode.com/problems/palindrome-number
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        string num=to_string(x);
        string pal=num;
        reverse(pal.begin(),pal.end());
        return pal.compare(num)==0?true:false;
    }
};