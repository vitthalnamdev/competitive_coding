#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
vector<int>adj[100005];
vector<ll>dist(100005,0);
ll mod = 1e9 + 7;
vector<int>vis(100005,0);
void dfs(int node  ,int n) {
    if(node==n){
        return ; 
    }
    vis[node] = 1;
    for(auto i: adj[node])
    {
        if(!vis[i]){
            dfs(i, n);
            dist[node] +=(dist[i]);
            dist[node] %=mod;
        }else{
            dist[node] += dist[i];
            dist[node] %=mod;
        }
    }
}
void solve(){
int n, m;cin>>n>>m;
for(int i=1;i<=m;i++){
    int a, b;cin>>a>>b;
adj[a].push_back(b);
}
dist[n] = 1;
dfs(1 , n);
cout<<dist[1]<<endl;
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