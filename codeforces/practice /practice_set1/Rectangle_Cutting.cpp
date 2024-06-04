#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
   int n,m;cin>>n>>m;
   vector<vector<int>>dp(501,vector<int>(501,INT_MAX));
   int v = max(n,m);int u=min(n,m);
   for(int i=1;i<=u;i++){
     for(int j=i;j<=v;j++){
       if(i==j){
          dp[i][j]=0;
       }else{
          for(int k=1;k<j;k++){
            dp[i][j]=min(dp[i][j],dp[i][k]+1+dp[i][j-k]);
          }
          for(int k=1;k<i;k++){
            dp[j][i]=min(dp[j][i],dp[j][k]+dp[j][i-k]+1);
          }
          dp[i][j]=min(dp[i][j],dp[j][i]);
          dp[j][i]=dp[i][j];
       }
     }
   }
   cout<<dp[n][m]<<endl;
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