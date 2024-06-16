#include<iostream>
#include<set>
#include<climits>
#include<vector>
using namespace std;
#define ll long long 
vector<pair<int,int>>adj[200005];
int vis1[200005];
 
ll dist[200005][2];
inline void shortest_path(int  node)
{  
        set<pair<ll, pair<int,int>>> s;
        s.insert({0, {node,0}});
        s.insert({0,{node,1}});
        while (!s.empty())  
        {
            auto top = *s.begin();
            s.erase(s.begin());

            if(vis1[top.second.first]> 2){
               continue;
            }
            vis1[top.second.first]++;
            for (auto i : adj[top.second.first])
            {
                if(  dist[i.first][0] > dist[top.second.first][0] + i.second  ){
                     dist[i.first][0] = dist[top.second.first][0] + i.second;
                     s.insert({dist[i.first][0],make_pair(i.first, 0)});
                }  
                ll mn = min(dist[top.second.first][0] + i.second/2, dist[top.second.first][1]  + i.second);
                
                if(  dist[i.first][1] > mn){
                    dist[i.first][1] = mn;
                    s.insert({dist[i.first][1],make_pair(i.first,1)});
                }
              
            }
        }
}
void solve(){
    int n, m;cin>>n>>m;
    for(int i=1;i<=m;i++){
        int a, b, c;cin>>a>>b>>c;
        adj[a].push_back({b,c});
    }  
    for(int i=1;i<=n;i++){
        dist[i][0] = LLONG_MAX;dist[i][1] = LLONG_MAX;
    }
    dist[1][0] = 0;
    dist[1][1] = 0;
   shortest_path(1);
   cout<<dist[n][1]<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t = 1;
while(t--){
solve();
}
}
