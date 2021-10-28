// The API isBadVersion is defined for you.
//https://leetcode.com/problems/first-bad-version/
#include<bits/stdc++.h>
using namespace std;
 bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
      long long int start=1,end=n,mid;mid=(start+end)/2;
        while(1){
            if(isBadVersion(mid)==true){
                if(mid>0&&isBadVersion(mid-1)==false)return mid;
                else if(mid==0)return 0;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=(start+end)/2;
        }
    }
};