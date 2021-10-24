//https://leetcode.com/problems/valid-palindrome
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string palindrome=onlyalphanumeric(s);
        string reversepalindrome=palindrome;
        reverse(palindrome.begin(),palindrome.end());
        return reversepalindrome.compare(palindrome)==0?true:false;
    }
    private: string onlyalphanumeric(string s){
        string result="";
        for(auto x:s){
            if(isalnum(x)){
                result+=x;
            }
          
        }
        transform(result.begin(),result.end(),result.begin(),::tolower);
        return result;
    }
};