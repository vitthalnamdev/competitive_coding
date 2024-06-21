#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
  ll n;cin>>n;ll k;cin>>k;
  ll arr[n];
  ll ans= 0;
  for(int i=0;i<n;i++){cin>>arr[i];}
  for(int i=1;i<n;i++){
       ans+=(abs(arr[i]-arr[i-1]));
  }ll finalans=ans;
  for(int i=1;i<n-1;i++){
    ll value = abs(arr[i]-arr[i-1]) + abs(arr[i+1]-arr[i]);
    ll mx = max(abs(arr[i-1]-1)+abs(arr[i+1]-1), abs(arr[i-1]- k) + abs(arr[i+1] - k));
    finalans= max(finalans,ans-value + mx);
  }
  ll value = abs(arr[1]-arr[0]);
   ll mx = max(abs(arr[1]-1) , abs(arr[1]- k)  );
   finalans=max(finalans, ans-value + mx );
     value = abs(arr[n-1]-arr[n-2]);
    mx = max(abs(arr[n-2]-1) , abs(arr[n-2]- k)  );
     finalans=max(finalans, ans-value + mx );
     cout<<finalans<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
//freopen('problemname.in', 'r', stdin);
//freopen('problemname.out', 'w', stdout);
int t;cin>>t;
while(t--){
solve();
}
}