//https://leetcode.com/problems/pascals-triangle-ii/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getRow(int numRows) {
         vector<vector<int>>Pascal;
        vector<int>row;
        row.push_back(1);
        Pascal.push_back(row);
        int rowSize=0;
        for(int i=1;i<=numRows;i++){
            vector<int>rows;
            rows.push_back(1);
            for(int j=0;j<rowSize;j++){
                
                rows.push_back(Pascal[i-1][j]+Pascal[i-1][j+1]);
            }
            rows.push_back(1);
            rowSize++;
            Pascal.push_back(rows);
            
        }
        return Pascal[numRows];
    }
};