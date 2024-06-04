#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
    ll n;cin>>n;
    ll mod = 1e9+7;
    vector<vector<ll>>dp(n+1,vector<ll>(2,0));     
    dp[0][0]=1;dp[0][1]=1;
    for(int i=1;i<=n;i++){
     if(i%2){
       dp[i][0]=(dp[i-1][0]+dp[i-1][1])%mod;
       dp[i][1]=dp[i-1][1];
     }else{
       dp[i][1]=(dp[i-1][0]+dp[i-1][1])%mod;
       dp[i][0]=dp[i-1][0];
     }
    }
    cout<<(dp[n][0]+dp[n][1]-2)%mod<<endl;

return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
// cin>>t;
t=1;
while(t--)
solve();
return 0;
}