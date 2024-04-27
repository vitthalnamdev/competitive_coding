#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
using ull=unsigned long long;
vector<int>adj[501];
int vis[501];
int n;
int weight[501][501];
ll dist[501][501];
 
void bfs(int node)
{   
    for(int i=1;i<=n;i++){vis[i]=0;dist[node][i]=LLONG_MAX; }
    set<pair<ll,ll>>q;
    dist[node][node]=0;
    q.insert({0,node});
    while(!q.empty())
    {
      auto top = *q.begin();
      q.erase(q.begin());
      if(vis[top.second]){continue;}
      vis[top.second]=1;
      for(auto j:adj[top.second])
      {
         if(weight[top.second][j]+top.first<dist[node][j])
         {
           dist[node][j]=weight[top.second][j]+top.first;
           q.insert({dist[node][j],j});
         }
      }
    }
    
    
}
 void solve(){
    int m,q;cin>>n>>m>>q;
    for(int i=0;i<=500;i++){
      for(int j=0;j<=500;j++){
         weight[i][j]=INT_MAX;
      }
    }
    for(int i=0;i<m;i++){
       int a,b,c;cin>>a>>b>>c;
       adj[a].push_back(b);
       adj[b].push_back(a);
       weight[a][b]=min(weight[a][b],c);
       weight[b][a]=min(weight[b][a],c);
    }   
   for(int i=1;i<=n;i++){
       bfs(i);
    }
     
      
   for(int i=0;i<q;i++){
    int a,b;cin>>a>>b;
    if(dist[a][b]==LLONG_MAX){
        cout<<-1<<endl;
    }else{
        cout<<dist[a][b]<<endl;
    }
   }



return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;

 t=1;
while(t--)
solve();
return 0;
}