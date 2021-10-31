//https://leetcode.com/problems/reshape-the-matrix/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if(m*n!=r*c)return mat;
        vector<int>oneD;
        for(auto x:mat){
            for(auto y:x){
                oneD.push_back(y);
            }
        }
        int z=0;
        vector<vector<int>>result;
        for(int i=0;i<r;i++){
            vector<int>zoom;
            for(int j=0;j<c;j++){
                zoom.push_back(oneD[z]);z++;
            }
            result.push_back(zoom);
        }
        return result;
    }
};