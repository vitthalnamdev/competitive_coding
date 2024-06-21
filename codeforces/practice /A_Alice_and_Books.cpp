#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
ll n;cin>>n;
ll arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
ll ans = 0;
for(int i=0;i<n-1;i++){
    ans=max(ans,arr[i]+arr[n-1]);
}
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