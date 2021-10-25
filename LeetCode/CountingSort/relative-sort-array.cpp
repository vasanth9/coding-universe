//https://leetcode.com/problems/relative-sort-array/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ascending;
        unordered_map<int,int>countA;
        for(int x:arr2){
            countA[x]=0;
        }
        for(int x:arr1){
            if(countA.count(x)!=0){
                countA[x]++;
            }
            else{
                ascending.push_back(x);
            }
        }
        sort(ascending.begin(),ascending.end());
        vector<int>result;
        for(int x:arr2){
            int c=countA[x];
            for(int j=0;j<c;j++){
                result.push_back(x);
            }
        }
        for(int x:ascending){
             result.push_back(x);
        }
        return result;
    }
};