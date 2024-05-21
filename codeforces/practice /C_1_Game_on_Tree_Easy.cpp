#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
vector<int>adj[200005];
void solve(){
  int n,t;cin>>n>>t;
  for(int i=0;i<n;i++){
     int u,v;cin>>u>>v;
     adj[u].push_back(v);
     adj[v].push_back(u);
  }
  
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
while(t--){
solve();
}
}