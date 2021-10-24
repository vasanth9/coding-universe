//https://leetcode.com/problems/excel-sheet-column-title
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result="";
        while(columnNumber>0){
            char c;
            if(columnNumber%26==0){
                c='Z';
                columnNumber/=26;
                columnNumber--;
            }
            else {
                c=(columnNumber%26)+'A'-1;
                columnNumber/=26;
            } 
            result=c+result;
        }
        return result;
    }
};