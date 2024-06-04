#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
int mod = 1e9+7;
vector<vector<ll>>dp(100005,vector<ll>(101,-1));
ll find(int i,int curr,int arr[],int n,int m)
{  
    if(curr>m || curr<1){
        return 0;
    }
    if(i>=n)return 1;
    else if(arr[i]!=0 && abs(arr[i]-curr)<=1){return 1;}
    else if(arr[i]!=0 && abs(arr[i]-curr)>1){return 0;}
    if(dp[i][curr]!=-1){
        return dp[i][curr];
    }
    ll ans=0;
    for(int j=curr-1;j<=curr+1;j++){
       ans+=(find(i+1,j,arr,n,m));
       ans%=mod;
    }
    return dp[i][curr]=ans;
}
 void solve(){
    int n,m;cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    ll ans=1;
    vector<ll>temp;
    for(int i=0;i<n;i++){
      if(i+1<n && arr[i]!=0 && arr[i+1]!=0 && abs(arr[i]-arr[i+1])>1){
        ans=0;break;
      }
      ll curr=0;
      for(int j=1;j<=m;j++){
         if(arr[i]==0){
          curr+=(find(i+1,j,arr,n,m));
         }else if(abs(arr[i]-j)<=1 && i+1<n){
          curr+=(find(i+1,arr[i],arr,n,m));break;
         }else if(i+1>=n){
            curr=1;break;
         }
         curr%=mod;
      }i=i+1;
      
      temp.push_back(curr);
      while(i<n && arr[i]==0){
         i++;
      }i=i-1;
    }
  if(ans==0){
   cout<<ans<<endl;return;
  }
  for(int i=0;i<temp.size();i++){
    
        ans*=temp[i];ans%=mod;
   
  }
  //for(int i=0;i<temp.size();i++)cout<<temp[i]<<endl;
   cout<<ans<<endl;

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