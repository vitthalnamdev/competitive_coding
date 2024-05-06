#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
int dp[5001][5001];
void solve(){
  string a,b;cin>>a>>b;   
  int n=a.length();int m = b.length();
  for(int i=0;i<=n;i++)dp[i][0]=i;
  for(int i=0;i<=m;i++)dp[0][i]=i;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      if(a[i-1]==b[j-1]){
         dp[i][j]=dp[i-1][j-1];
      }else{
        dp[i][j]=min(dp[i-1][j]+1,min(dp[i][j-1]+1,dp[i-1][j-1]+1));
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