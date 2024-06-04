#include <bits/stdc++.h>
 
using namespace std;
 #define ll long long 
int main() {
    int n;cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    ll pre[n+1];  
    ll suff[n+1];
    for(int i=0;i<n;i++){
        pre[i]=arr[i]+(n-i-1);
    }
    for(int i=0;i<n;i++){
        suff[i]=arr[i]+i;
    }
    for(int i=1;i<n;i++){
      pre[i]=max(pre[i],pre[i-1]);
    }
    for(int i=n-2;i>=0;i--){
      suff[i]=max(suff[i],suff[i+1]);
    }
    ll ans= LLONG_MAX;
    for(int i=0;i<n;i++){
      ll curr=arr[i];
      if(i>0)curr=max(curr,pre[i-1]);
      if(i+1<n)curr=max(curr,suff[i+1]);
      ans=min(ans,curr);
    }
    cout<<ans<<endl;
    return 0;
}