#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
      int n;cin>>n;int arr[n];
      for(int i=0;i<n;i++){
        cin>>arr[i];
      } 
    int k;cin>>k;
    int ans=0;
    int dp[k][k];
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){dp[i][j]=0;}
    }
    vector<int>count(k,0);
    for(int i=0;i<n;i++){
       arr[i]%=k;int temp=0;int val=0;
       for(int j=0;j<k;j++){
         int to = (j+k-arr[i])%k;
         if(count[to]>0){
             dp[arr[i]][j]=max(dp[arr[i]][j],dp[to][j]+1);     
         }
        }
       count[arr[i]]++;
    }
    
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            ans=max(ans,dp[i][j]);
        }
    }
    cout<<ans+1<<endl;

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