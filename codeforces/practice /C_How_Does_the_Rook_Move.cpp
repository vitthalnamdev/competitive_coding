#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
int mod = 1e9+7;
 void solve(){
       int n,k;cin>>n>>k;
       vector<pair<int,int>>arr(k);
       for(int i=0;i<k;i++)cin>>arr[i].first>>arr[i].second;
       int curr=n;
       for(int i=0;i<k;i++){
         curr-=(2-(arr[i].first==arr[i].second));
       }
       vector<ll>dp(n+1,0);
       dp[0]=dp[1]=1;
       if(curr<0)curr=0;
       for(ll i=2;i<=curr;i++){
         dp[i]=dp[i-1] + (2*(i-1)*(dp[i-2]))%mod;
         dp[i]%=mod;
       }
       cout<<dp[curr]<<endl;
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