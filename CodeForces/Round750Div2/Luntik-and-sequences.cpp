#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
       ll n,zero=0,one=0,x;
        cin>>n;
        for(int i=0;i<n;i++){
              cin>>x;
              if(x==0)zero++;
              else if(x==1)one++;
        }
        cout<<one*(1ll << zero)<<"\n";
    }
}