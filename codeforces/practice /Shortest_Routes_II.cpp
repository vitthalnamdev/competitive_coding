#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
using ull=unsigned long long;
vector<pair<int,int>>adj[501];
int vis[501];
int n;
ll dist[501][501];
void bfs(int node)
{   
    for(int i=1;i<=n;i++){vis[i]=0;dist[node][i]=LLONG_MAX;}
    set<pair<ll,ll>>q;
    dist[node][node]=0;
    q.insert({0,node});
    while(!q.empty())
    {
       auto top=*q.begin();
       q.erase(q.begin());
       if(vis[top.second]){continue;}
       vis[top.second]=1;
       for(auto i:adj[top.second]){
          if(top.first+i.second<dist[node][i.first]){
            dist[node][i.first]=top.first+i.second;
            q.insert({dist[node][i.first],i.first});
          }
        //  if(i.first==2){cout<<top.first<<endl;cout<<dist[node][i.first]<<endl;}
       }
    }
}
 void solve(){
    int m,q;cin>>n>>m>>q;
    for(int i=0;i<n;i++){
       int a,b,c;cin>>a>>b>>c;
       adj[a].push_back({b,c});
       adj[b].push_back({a,c});
    }   
   // for(int i=1;i<=n;i++){
     //   bfs(i);
    //}
      bfs(1);
      cout<<dist[1][2]<<endl;
//    for(int i=0;i<q;i++){
//     int a,b;cin>>a>>b;
//     if(dist[a][b]==LLONG_MAX){
//         cout<<-1<<endl;
//     }else{
//         cout<<dist[a][b]<<endl;
//     }
//    }



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