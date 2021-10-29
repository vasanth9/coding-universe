//https://leetcode.com/problems/counting-bits
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> countBits(int num) {
        //copied from Discuss()
         vector<int> res(num);
        res.push_back(0);  // for num=0
        if(num==0) return res;
        
        for(int i=1;i<=num;i++){
            if(i%2==0){
                res[i]=res[i/2];
            } else {
                res[i]=res[i-1]+1;
            }
        }
        return res;
    }
};