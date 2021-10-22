//https://leetcode.com/problems/add-binary
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
    int l1=a.length(),l2=b.length();
        string x="";
        if(l1<l2){
            for(int i=0;i<l2-l1;i++)
            {
                x=x+"0";
            }
            a=x+a;l1=l2;
        }
        else {
            for(int i=0;i<l1-l2;i++)
            {
                x=x+"0";
            }
            b=x+b;
        }
        cout<<a<<" "<<b<<"\n";
        int carry=0,p,q,sum;
        string result="";
        for(int i=l1-1;i>=0;i--){
             p=(int)a[i]-48;
             q=(int)b[i]-48;
             sum=p+q+carry;
            cout<<sum<<"\n";
            if(sum==3){result="1"+result;carry=1;}
            else if(sum==2){result="0"+result;carry=1;}
            else if(sum==1){result="1"+result;carry=0;}
            else{
                result="0"+result;carry=0;
            }
        }
        if(carry==1)result="1"+result;
        return result;
    }
};