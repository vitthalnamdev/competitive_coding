#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
  map<int,list<int>>adj;
  // by rerooting on trees , 
  // and by dfs by finding the biggest diameter in trees.
void dfs(int node,int parent,int dist[])
{
  if(parent!=-1){dist[node]=dist[parent]+1;}
  for(auto i:adj[node])
  {
    if(i!=parent)
    {
      dfs(i,node,dist);
    }
  }
}
void solve(){
adj.clear();
int n,k;cin>>n>>k;
int arr[k];
for(int i=0;i<k;++i)cin>>arr[i];
for(int i=0;i<n-1;i++){
   int a,b;cin>>a>>b;
   adj[a].push_back(b);
   adj[b].push_back(a);
}
if(k==0){
  cout<<0<<endl;return;
}
  int dist[n+1];
  dist[arr[0]]=0;
  dfs(arr[0],-1,dist);
  int mx = arr[0];
  for(int i=0;i<k;i++){
    if(dist[arr[i]]>dist[mx]){mx=arr[i];}
  }
  
  int dist2[n+1];
  dist2[mx]=0;
  dfs(mx,-1,dist2);
  for(int i=0;i<k;i++){
    if(dist2[arr[i]]>dist2[mx]){mx=arr[i];}
  }
  //cout<<mx<<endl;
 // cout<<dist[mx]<<endl;
  cout<<(dist2[mx]+1)/2<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
while(t--){
solve();
}
}