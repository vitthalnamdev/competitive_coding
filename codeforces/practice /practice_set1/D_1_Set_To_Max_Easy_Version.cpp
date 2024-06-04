#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
      int n;cin>>n;
      int arr[n+1],brr[n+1];
      for(int i=1;i<=n;i++)cin>>arr[i];
      for(int i=1;i<=n;i++)cin>>brr[i];  
      vector<int>dp(n+1,0);                                                           
      dp[0]=1;
      arr[0]=arr[1];
      for(int i=1;i<=n;i++){
            int mx=arr[i];set<int>s;   
            for(int j=i;j<=n;j++){    
               s.insert(brr[j]);   
               mx=max(mx,arr[j]);
              if(s.size()==1 && *(s.begin())==mx){
                 dp[j]|=dp[i-1];
              }
              if(arr[j]==brr[j]){dp[j]|=dp[j-1];}
               // what to do . 
            }
      } 
     if(dp[n]){
      cout<<"YES"<<endl;
     }else{
      cout<<"NO"<<endl;
     }
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