#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
    int n,k;cin>>n>>k;
    vector<ll>arr(n+2);
    for(int i=1;i<=n;i++)cin>>arr[i];
    arr[0]=LLONG_MAX;arr[n+1]=LLONG_MAX;
    vector<vector<ll>>dp(n+2,vector<ll>(k+1,1e15)); 
    dp[0][0]=0; 
    for(int i=1;i<=n;i++){
       dp[i][0]=dp[i-1][0]+arr[i];
       for(int j=1;j<=min(i,k);j++){       
          dp[i][j]=min(dp[i-1][j]+arr[i],dp[i-1][j-1]+(min(arr[i],min(arr[i-1],arr[i+1]))));
       }
    } 
    ll ans=LLONG_MAX;
    for(int i=0;i<=min(n,k);i++){
        ans=min(ans,dp[n][i]);
    }cout<<ans<<endl;
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