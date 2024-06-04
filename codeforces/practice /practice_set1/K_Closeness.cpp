#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       ll n,k;cin>>n>>k;
       ll arr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
       for(int i=0;i<n;i++){
        arr[i]%=k;
       }
       sort(arr,arr+n);
       ll ans=INT_MAX;
      for(int i=0;i<n-1;i++){
        ans=min(ans,arr[i]+k-arr[i+1]);
      }
      ans=min(ans,arr[n-1]-arr[0]);
     cout<<ans<<endl;


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