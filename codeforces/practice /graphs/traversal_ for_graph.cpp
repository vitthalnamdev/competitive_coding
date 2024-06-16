#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
 
class Graph{
 public:
 int*vis;int*parent;
 vector<int>adj[200005];
 int*dist;
 Graph(){
    vis = new int[200005];
    parent = new int[200005];
    dist = new int[200005];
    for(int i=0;i<200001;i++){
        vis[i]=0;parent[i]=-1;dist[i] = 0;
    }
 }
 void d_edge(int a,int b){
    adj[a].push_back(b);
 }
 void u_edge(int a, int b)
 {
    adj[a].push_back(b);
    adj[b].push_back(a);
 }
void bfs(int node){
    queue<int>q;
    q.push(node);
    vis[node] = true;
    while(!q.empty())
    {
       int top = q.front(); 
       q.pop();
       for(auto j:adj[top])
       {
          if(!vis[j]){  
            q.push(j);
            vis[j]=1;
            dist[j] = dist[top] + 1;
            parent[j] = top;
          } 
       }
   } 
}

bool dfs(int node){
   vis[node] = true;
  for(auto i: adj[node])
  {
   if(!vis[i]){parent[i]= node;bool now = dfs(i);
     if(now==true && (ans[0]!=ans.back() || ans.size()==1)){
        ans.push_back(node); 
     }
     if(now==true)return true;
   }
   else if(i!=parent[node]){
      ans.push_back(i);ans.push_back(node);return  true;
   }
  }
  return false;
 }
 bool isBipartite(int node,vector<int>&color,int curr)
 {
    vis[node] = 1;
    color[node] = curr;
    for(auto i: adj[node]){
      if(!vis[i]){
        bool ans = isBipartite(i,color,curr^1);
        if(ans==false)return false;
      }else if(color[i]==color[node]){
        return false;
      }
    }
    return true;
 }
};

int main(){

  Graph g;
  
  int n,m;cin>>n>>m;
  for(int i=0;i<m;i++){
    int a, b;cin>>a>>b;
  
    g.u_edge(a,b);
  } 
  bool now = 0;
  for(int i=1;i<=n;i++){
    if(!g.vis[i]){
      now =  g.dfs(i);
    if(now == true)break;
    }
  } 
    if(now == false){
   cout<<"IMPOSSIBLE"<<endl;
  }else{
     cout<<ans.size()<<endl;
     for(auto i: ans)cout<<i<<" ";cout<<endl;
  }
}