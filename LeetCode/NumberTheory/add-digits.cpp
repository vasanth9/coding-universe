//https://leetcode.com/problems/add-digits/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int addDigits(int num) {
        if(num==0)return 0;
        int x=num%9;
        if(x!=0)return x;
        return 9;
    }
};