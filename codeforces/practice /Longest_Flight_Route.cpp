#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
vector<int>adj[100005];
vector<int>dist(100005);
vector<int>ans;
vector<int>vis(100005);
int dfs(int node , int n){
  if(node==n){
    return dist[node] = 1;
  }
   vis[node] = 1;
   for(auto i: adj[node]){
      if(!vis[i]){ 
        int curr = dfs(i , n);
        if(curr > 0)
        dist[node] =max(curr + 1, dist[node]);
      }else{
        dist[node] = max(dist[node] , dist[i] + 1);  
      }
   }
   return dist[node];
}
void getans(int node){
    ans.push_back(node);
    int now = 0;int ele = 0;
    for(auto i:adj[node]){
       if(dist[i]>now){
        now = dist[i];ele = i;
       }
    }
    if(ele>0)
    getans(ele);
}
void solve(){
   int n, m;cin>>n>>m;
   for(int i=1;i<=m;i++){
     int a, b;cin>>a>>b;
     adj[a].push_back(b);
   }
   dfs(1 , n);
   if(dist[n]==0){
     cout<<"IMPOSSIBLE"<<endl;return;
   }else{
     
    getans(1);
    cout<<ans.size()<<endl;
    for(int i:ans)cout<<i<<" ";
   }
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
//freopen('problemname.in', 'r', stdin);
//freopen('problemname.out', 'w', stdout);
int t=1;
while(t--){
solve();
}
}
