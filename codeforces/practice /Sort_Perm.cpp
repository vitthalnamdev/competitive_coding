#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
int n;cin>>n;
ll arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
 vector<int>mark(n+1,0);
 for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        mark[i]=1;
    }
 }
  
 bool f = 0;
 for(int i=0;i<n-1;i++){
    if(mark[i] && mark[i+1]){
         cout<<0<<endl;return;
    }
 }
 
ll  mn = 1;ll mx = n;
 for(int i=0;i<n;i++){
    if(i-1>=0 && mark[i-1]){
       mn = max(mn, arr[i-1] - arr[i]);
       f =1;
    }
    if(i+1<n && mark[i+1] && f){
        mx= min(mx, arr[i + 1] - arr[i]);
    }
 }
 ll ans = (mx*(mx+1) )/ 2;
  ans -= ((mn-1)*mn) / 2;
  ans=max(ans , (ll) 0 );
  cout<<ans<<endl;
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