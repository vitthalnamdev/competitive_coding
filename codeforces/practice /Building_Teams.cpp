#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
vector<int>adj[100005];
int parent[100005];
int vis[100005];
void bfs(int node)
{
    queue<int>q;
    q.push(node);vis[node]=1;
    while(!q.empty())
    {
        int top=q.front();q.pop();
        for(auto i:adj[top])
        {
            if(vis[i]==2)
            {
                q.push(i);parent[i]=top;
                vis[i]=1;
            }
        }
    }
}
 void solve(){
       int n;cin>>n;int m;cin>>m;
       for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
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