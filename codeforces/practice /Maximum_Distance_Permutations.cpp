#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
int n;cin>>n;
int ans[n+1];
for(int i=1;i<=n;i++)cout<<i<<" ",ans[i]=i;cout<<endl;

 
 for(int i=1;i<=n/2;i++){
    swap(ans[i],ans[i+n/2]);
 }
 if(n%2){
    swap(ans[n],ans[n/2+1]);
 }
for(int i=1;i<=n;i++){
    cout<<ans[i]<<" ";
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