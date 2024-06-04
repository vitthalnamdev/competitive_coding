#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
 int n,k;cin>>n>>k;
 int arr[n];
 for(int i=0;i<n;i++)cin>>arr[i];
 int ans=arr[n-1]-arr[0];
 for(int i=0;i<=arr[0];i++){
   int mn = 0;int mx = INT_MAX;
    for(int j=0;j<n;j++){
      int left;
       if(i==0){
          left = min(arr[j]+1,k);
       }else{
         left = min(arr[j]/i,k);
       }
       mn=max(mn,arr[j]/left);
       mx=min(mx,arr[j]/left);
    }
    ans=min(ans,mn-mx);
 }
 cout<<ans<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
while(t--){
solve();
}
}