//https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>smap;
        for(int x:deck){
            smap[x]++;
        }
        vector<int>d;
        for(auto x:smap){
            d.push_back(x.second);
        }
        sort(d.begin(),d.end());
        int z=d[0];
        if(z>=2){
            for(int i=2;i<=z;i++){
                bool good=true;
            for(int x:d){
                
                if(x%i!=0){
                    good=false;break;
                }
            }
              if(good)  return true;
            }
        }return false;
    }
};