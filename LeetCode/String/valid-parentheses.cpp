//https://leetcode.com/problems/valid-parentheses
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char>brackets;
        for(int i=0;i<s.length();i++){
           char x=s[i];
            if(x=='('||x=='{'||x=='['){
                brackets.push(x);
            }
            else if(x==')'){
                if(brackets.empty())return false;
                if(brackets.top()=='(')brackets.pop();
                else return false;
            }
            else if(x=='}'){
                if(brackets.empty())return false;
                if(brackets.top()=='{')brackets.pop();
                else return false;
            }else {
                if(brackets.empty())return false;
                if(brackets.top()=='[')brackets.pop();
                else return false;
            }
        }
        if(brackets.empty()) 
        return true;
        return false;
    }
};