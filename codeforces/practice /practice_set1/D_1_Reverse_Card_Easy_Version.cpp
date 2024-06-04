#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n,m;cin>>n>>m;
       int ans=0; 
       for(ll i=1;i<=m;i++){
         for(ll j=i;j<=n;j+=i){
            ll mul = i+j;
            ll div= i*(__gcd(i,j));
            if(div==0){
               break;
            }
            if((mul%div)==0)ans++;
           
         }
       }
    // cout<<__gcd(65536,65536)<<endl;;
 cout<<ans<<endl;



return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
cin>>t;
// t=1;
while(t--)
solve();
return 0;
}