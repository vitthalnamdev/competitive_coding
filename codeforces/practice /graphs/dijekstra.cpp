#include<iostream>
#include<vector>
#include<climits>
#include<set>
using namespace std;
#define ll long long
ll dist2[501][501];
bool vis[501];
vector<int>adj[501];
int weight[501][501];
int visited[501][501];
 inline void u_edge(int a, int b,int c)
    {
        if(!visited[a][b]){
          visited[a][b] = 1;
          adj[a].push_back(b);
        }
        if(!visited[b][a]){
            visited[b][a]=1;
           adj[b].push_back(a);
        }
         if (weight[a][b] == 0)
        {
            weight[a][b] = c;
            weight[b][a] = c;
        }
        else
        {
            weight[a][b] = min(weight[a][b], c);
            weight[b][a] = min(weight[b][a] , c);
        }
    }
  inline void shortest_path(int  node)
    {
        dist2[node][node] = 0;
         
        set<pair<ll, int>> s;
        s.insert({0, node});
        while (!s.empty())
        {
            auto top = *s.begin();
            s.erase(s.begin());

            if (vis[top.second])
            {
                continue;
            }
            vis[top.second] = 1;
            for (auto i : adj[top.second])
            {
                if (dist2[node][i] > dist2[node][top.second] + weight[top.second][i])
                {
                    dist2[node][i] = dist2[node][top.second] + weight[top.second][i];
                    s.insert({dist2[node][i], i});
                }
            }
        }
    }
int main()
{
    std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
     int n, m,q;
    cin >> n >> m >> q;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            dist2[i][j]=LLONG_MAX;
            weight[i][j] = 0;
        }
    }
    for (ll i = 1; i <= m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        u_edge(a, b, c);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) vis[j]=0;
       shortest_path(i);
    }
    while(q--)
    {
         int a, b;cin>>a>>b;
         if(dist2[a][b]==LLONG_MAX){
          cout<<-1<<endl;continue;
         }
         cout<<dist2[a][b]<<endl;
    }
}