#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
map<int,list<int>>adj;
int vis[100005];
int cnt=0;
int dfs(int node,int curr)
{
   if(vis[node]==true){return 0;}
   vis[node]=1;
   int now=1;
   bool f=0;
   for(auto i:adj[node])
   {
      now+=(dfs(i,curr));
      if(now>=curr){
            f=1;
            cnt++;now=0;
      }
      if(f){now=0;}
   }
   return now;    
}
bool check(int mid,int k,int n)
{
   cnt=0;
   for(int i=0;i<=n;i++)vis[i]=0;
   int now = dfs(1,mid);
   if(now<mid){
       cnt--;
   }
  // cout<<cnt<<endl;
   return cnt>=k;
}
 void solve(){
      adj.clear();
      int n,k;cin>>n>>k;   
    for(int i=0;i<n-1;i++){
      int a,b;cin>>a>>b;
      adj[a].push_back(b);
      adj[b].push_back(a);
    }
    int start=0;int end=1e9;
    while(end-start>1)
    {
      int mid=(start+end)/2;
      if(check(mid,k,n))
      {start=mid;}
      else end=mid-1;
    } 
    if(check(end,k,n))
    {
      cout<<end<<endl;
    }else{
      cout<<start<<endl;
    }
return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
cin>>t;
// t=1;
while(t--)
solve();
return 0;
}