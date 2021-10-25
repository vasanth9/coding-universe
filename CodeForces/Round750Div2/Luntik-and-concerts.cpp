#include<bits/stdc++.h>
using namespace std;
int solve(int a,int b,int c){
    int result=0;
    if(a%2==0&&b%2==0&&c%2==0)return 0;
    else if(a%2==1&&b%2==1&&c%2==1)return 0;
    else if(a%2==0&&b%2==1&&c%2==1)return 1;
    else if(a%2==1&&b%2==1&&c%2==0)return 1;
    else if(a%2==1&&b%2==0&&c%2==1)return 0;
    else if(a%2==0&&b%2==0&&c%2==1)return 1;
    else if(a%2==0&&b%2==1&&c%2==0)return 0;
    else if(a%2==1&&b%2==0&&c%2==0)return 1;
    return result;
}
int main(){
    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        cout<<solve(a,b,c)<<"\n";
    }
}