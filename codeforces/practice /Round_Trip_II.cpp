#include<bits/stdc++.h>
using namespace std;
#define ll long long 
vector<int>adj[100005];
vector<int>vis(100005,0);
vector<int>vis1(100005,0);
vector<int>result;
bool f=0;
bool dfs(int node)
{
  vis[node] = 1;
  vis1[node] = 1;
  for(auto i: adj[node])
  {
     if(!vis[i]){
      bool ans =   dfs(i);
      if(ans == true && f==0){
        result.push_back(node);
        if(node==result[0]){
            f=1;
        }
      }
      if(ans==true)return ans;   
     }else if(vis1[i]){
       result.push_back(i);   
       result.push_back(node);
       return true;
     }
  }
  vis1[node]  = 0;
  return false;
}
void solve(){
  int n;cin>>n;int m;cin>>m;
  for(int i=0;i<m;i++){
    int a, b;cin>>a>>b;
    adj[a].push_back(b);
  }
  bool now = false;
  for(int i=1;i<=n;i++){
    if(!vis[i]){now = dfs(i); if (now ==true){break;}}
  }
  if(now == false){
    cout<<"IMPOSSIBLE"<<endl;return;
  }
  reverse(result.begin(),result.end());
  cout<<result.size()<<endl;
  for(auto i:result)cout<<i<<" ";
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