#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
class Edge{
    public:
    ll a,b,cost;
 };
 
vector<int>adj[2501];
bool f=0; int vis[2501];int vis1[2501];
vector<ll>bellman_ford(int n,vector<Edge>&edges){
    const ll INF=1e18;
      vector<ll> d(n, INF);
    d[1] = 0;
    for (int i = 0; i <= n - 1; ++i){
        for (Edge e : edges){
            if (d[e.a] < INF){
                if(i==n-1 && vis[e.a] && vis1[e.b] && d[e.a]+e.cost < d[e.b]){
                    f=1;return {-1};
                }
                d[e.b] = min(d[e.b], d[e.a] + e.cost);
            }
        }
    }return d;
}
 
 void dfs1(int node)
 {
    if(vis1[node]){return;}
    vis1[node]=true;
    for(auto i:adj[node]){dfs1(i);}
 }
  void dfs(int node)
 {
    if(vis[node]){return;}
    vis[node]=true;
    for(auto i:adj[node]){dfs(i);}
 }
 void solve(){
    int n,m;cin>>n>>m;
    vector<Edge>edges;
    for(int i=0;i<m;i++){
       ll a,b,cost;cin>>a>>b>>cost;
       Edge temp;
       temp.a = a;temp.b=b;temp.cost = -cost;
      edges.push_back(temp); 
    }
    dfs1(1);dfs(n);
     auto ans=bellman_ford(n,edges );
     cout<<-ans[ans.size()-1]<<endl;

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