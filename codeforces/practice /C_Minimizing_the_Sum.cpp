#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
   ll n,k;cin>>n>>k;
   ll arr[n];
   for(int i=0;i<n;i++)cin>>arr[i];
   vector<vector<ll>>dp(n+2,vector<ll>(k+2,1e15));
   dp[0][0]=0;
  
   for(int i=0;i<n;i++){
     for(int j=0;j<=k;j++){
       ll mn =arr[i];      
       for(int l=0;j+l<=k && i+l<n;l++)
       {
        mn=min(mn,arr[i+l]);
        dp[i+l+1][j+l]=min(dp[i+l+1][j+l],dp[i][j]+ (l+1)*mn); 
       }
         
     }
   }
  
   cout<<*min_element(dp[n].begin(),dp[n].end())<<endl;
return;
} 
int main()
{
std::ios::sync_with_stdio(false);
std::cin.tie(nullptr);
std::cout.tie(nullptr);
int t;
cin>>t;
// t=1;
while(t--)
solve();
return 0;
}