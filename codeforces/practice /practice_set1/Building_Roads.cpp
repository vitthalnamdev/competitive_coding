#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
map<int,list<int>>adj;
int vis[100001];
int bfs(int node)      
{
   queue<int>q;int prev=node;
   q.push(node);
   while(!q.empty())
   {
     int top=q.front();
     q.pop();vis[top]=1;

     prev=top;
     for(auto j:adj[top])
     {
        if(!vis[j]){
            q.push(j);
        }         
     }
   }
   return prev;
}
 void solve(){
     int n;cin>>n;
     int m;cin>>m;   
     for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
     }
     vector<pair<int,int>>ans;
     int ind=-1;
     for(int i=1;i<=n;i++){
        if(!vis[i])
        {
        if(ind!=-1){
            ans.push_back({ind,i});
        }
        ind=  bfs(i);
        }
     }
     cout<<ans.size()<<endl;
     for(auto i:ans){
         cout<<i.first<<" "<<i.second<<endl;
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