//https://leetcode.com/problems/roman-to-integer
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        map<char,int>Roman;
        Roman['I']=1;
        Roman['V']=5;
        Roman['X']=10;
        Roman['L']=50;
        Roman['C']=100;
        Roman['D']=500;
        Roman['M']=1000;
        int Integer=0;
        int previous=0;
        int n=s.length();
        for(int i=n-1;i>=0;i--){
            char x=s[i];
            if(Roman[x]<previous){
                Integer-=Roman[x];
                previous=Roman[x];
            }
            else{
                Integer+=Roman[x];
                previous=Roman[x];
            }
        }
        return Integer;
    }
};