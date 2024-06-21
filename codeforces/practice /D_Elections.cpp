#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
ll n, c;cin>>n>>c;
ll arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
ll mx = arr[0]+c;int ind = 0;
for(int i=1;i<n;i++){
    if(mx < arr[i]){
        mx = arr[i];ind = i;
    }
}ll prev = c; 
for(int i=0;i<n;++i){
  prev+=arr[i];
  if(i==ind){cout<<0<<" ";}
  else if(prev>=mx){
   cout<<i<<" ";
  }else{
     cout<<i+1<<" ";
  }
}cout<<endl;
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