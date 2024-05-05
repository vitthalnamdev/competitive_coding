#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
 
vector<pair<ll,ll>>adj[100005];
vector<pair<ll,ll>>dist(100005,{1e15,1e15});
int vis[100005];
void bfs()
{
  dist[1]={0,0};
  set<pair<ll,ll>>s;
  s.insert({0,1});
  while(!s.empty())
  {
    auto top = *s.begin();
    s.erase(s.begin());
    if(vis[top.second]>2){continue;}
    vis[top.second]++;
    for(auto i:adj[top.second])
    {
    
       if(dist[top.second].first+i.second<dist[i.first].first)
       {
           dist[i.first].first=dist[top.second].first+i.second;  
           s.insert({dist[i.first].first,i.first});   
       }
       
       ll temp = min(dist[top.second].second+i.second,dist[top.second].first+i.second/2);
       if(temp<dist[i.first].second){
         dist[i.first].second = temp;
           s.insert({temp,i.first});
       }
        
    }
  }
}
 void solve(){
   ll n,m;cin>>n>>m;
   for(int i=0;i<m;i++)    
   {
      ll a,b,c;cin>>a>>b>>c;
      adj[a].push_back({b,c});
   }
   bfs();
 // cout<<dist[4].second<<endl;
   cout<<dist[n].second<<endl;
return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
// cin>>t;
t=1;
while(t--)
solve();
return 0;
}