#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
ll find(ll a,int b){
    while(b>0 && a>0){
        a/=2;b--;
    }
    return a;
}
void solve(){
ll n,k;cin>>n>>k;
ll arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
ll dp[n+1][31];
for(int i=0;i<=n;i++)for(int j=0;j<31;j++)dp[i][j]=0;
for(int i=0;i<n;i++){
  dp[i+1][0]=dp[i][0]+arr[i]-k;
  for(int j=1;j<=min(i+1,30);j++){
    dp[i+1][j]=max(dp[i][j-1]+find(arr[i],j),dp[i][j]+find(arr[i],j)-k);
  }
}
  ll ans=0;
  for(int j=1;j<=n;j++)
  for(int i=0;i<31;i++){
    
    ans=max(ans,dp[j][i]);
  }
  cout<<ans<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
while(t--){
solve();
}
}