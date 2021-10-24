//https://leetcode.com/problems/excel-sheet-column-number
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int x=1;
        int n=columnTitle.length();
        int result=0;
        for(int i=n-1;i>=0;i--){
           result+=(columnTitle[i]-64)*x;if(i>0)x*=26;
        }
        return result;
    }
};