#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
vector<int>adj[200005];
int vis[200005];
int dp[200005];
int dfs(int node,int player)
{
   dp[node]=1^player;
   vis[node]=true;
   for(auto i:adj[node])
   {
      if(!vis[i])
      {
         int win = dfs(i,1^player);
         if(win==player){
             dp[node]=player;
         }
      }
   }
   return dp[node];
}
void solve(){
  int n,t;cin>>n>>t;
  for(int i=0;i<n-1;i++){
     int u,v;cin>>u>>v;
     adj[u].push_back(v);
     adj[v].push_back(u);
  }
  int stone;cin>>stone;
   dfs(stone,0);
   if(dp[stone]==0){
     cout<<"Ron"<<endl;
   }else {
    cout<<"Hermione"<<endl;
   }
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;t=1;
while(t--){
solve();
}
}