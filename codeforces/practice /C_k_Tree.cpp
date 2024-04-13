#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
#define mod 1000000007
void solve(){
  ll n,k,d;cin>>n>>k>>d;
  ll dp[n+1];ll smalldp[n+1];
  for(int i=0;i<=n;i++)dp[i]=0,smalldp[i]=0;
  smalldp[0]=1;
  for(int i=0;i<=n;i++){
    for(int j=1;j<=k;j++){
      if(j<d && i+j<=n){
         smalldp[j+i]+=smalldp[i];
         smalldp[j+i]%=mod;
      }
      if(j>=d && i+j<=n){
         dp[i+j]+=smalldp[i];
         dp[i+j]%=mod;
      }
      if(i+j<=n){
       dp[i+j]+=dp[i];
       dp[i+j]%=mod;
      }
   }
  }  
  cout<<dp[n]<<endl;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
 
  t=1;
while(t--)
solve();
return 0;
}