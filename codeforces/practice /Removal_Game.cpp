#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
ll dp[5005][5005];
 void solve(){
       int n;cin>>n;
       ll arr[n+1];
       for(int i=1;i<=n;i++)cin>>arr[i];
       ll prefix[n+1];
       prefix[0]=0;
       for(int i=1;i<=n;i++){
        prefix[i]=prefix[i-1]+arr[i];
       }
       for(int i=n;i>=1;i--){
        for(int j=i;j<=n;j++){
          dp[i][j]=max(prefix[j]-prefix[i]-dp[i+1][j]+arr[i],prefix[j-1]-prefix[i-1]-dp[i][j-1]+arr[j]);
        }
       }
       cout<<dp[1][n]<<endl;
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