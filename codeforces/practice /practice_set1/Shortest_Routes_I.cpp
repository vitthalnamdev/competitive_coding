#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
vector<pair<int,int>>adj[100005];
ll dist[100005];
//map<int,int>check;
int vis[100005];
void bfs(int node)
{
    set<pair<ll,ll>>q;
    q.insert({0,node});
    while(!q.empty())
    {
       auto top=*q.begin();
       q.erase(q.begin());
       if(vis[top.second]){continue;}
       vis[top.second]=1;
       for(auto i:adj[top.second]){
          if(top.first+i.second<dist[i.first]){
            dist[i.first]=top.first+i.second;
            q.insert({dist[i.first],i.first});
          }
       }
    }
}
 void solve(){
    ll n,m;cin>>n>>m;
    int q;cin>>q; 
    for(int i=1;i<=n;i++)dist[i]=LLONG_MAX;
    for(int i=0;i<m;i++)  
    {
       ll a,b,c;cin>>a>>b>>c;
       adj[a].push_back({b,c});
      adj[b].push_back({a,c});     
    }
    dist[1]=0;
    bfs(1);
    for(int i=1;i<=n;i++)cout<<dist[i]<<" ";cout<<endl;
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