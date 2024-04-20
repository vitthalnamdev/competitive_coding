#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
int vis[100005];
int valid=0;
int dist[100005];
vector<int>ans;
vector<int>adj[100005];
int cnt=0;
 
void dfs(int node)
{
    vis[node]=1;
    for(auto i:adj[node])
    {
       if(valid>0){break;}
       if(!vis[i]){
          dist[i]=dist[node]+1;
          dfs(i);
       }else if(dist[node]-dist[i]>=2){
       //  cout<<dist[node]<<" "<<dist[i]<<endl;
          ans.push_back(i);cnt++;
          valid=i;break;
       }
    }
    if(valid>0 && cnt<2){
        ans.push_back(node);
        if(node==valid){
         cnt++;
        }
    }
}
 
 void solve(){
       int n,m;cin>>n>>m;
      
      for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
      }

      for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
        }
      }
     if(valid==0){
        cout<<"IMPOSSIBLE"<<endl;
     }else{
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }cout<<endl;
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