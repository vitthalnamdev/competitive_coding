#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
    int n;cin>>n;
    vector<pair<ll,string>>arr(n);
    for(int i=0;i<n;i++){
       int x;string s;cin>>x>>s;
       arr[i]={x,s};
    }  
     
    ll dp[n+1][10];
    for(int i=0;i<=n;i++){
        for(int j=0;j<10;j++)dp[i][j]=INT_MAX;
    }
    dp[0][0]=0;
    for(int i=0;i<n;i++){
        int number=0;
        auto s=arr[i].second;
         for(int k=0;k<s.length();k++){
           number+=(pow(2,s[k]-'A'));
         }
  
       for(int j=0;j<8;j++){
         dp[i+1][j|number]=min(dp[i+1][j|number],dp[i][j]+arr[i].first);
         dp[i+1][j]=min(dp[i+1][j],dp[i][j]);
       }
    }
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<10;j++)cout<<dp[i][j]<<" ";
    //     cout<<endl;
    // }
   if(dp[n][7]==INT_MAX){
    cout<<-1<<endl;
   }else{
    cout<<dp[n][7]<<endl;
   }
return;
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