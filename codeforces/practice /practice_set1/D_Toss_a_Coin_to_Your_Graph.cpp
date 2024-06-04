#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
vector<ll>adj[200005];
int vis[200005];
ll inf = 1e18;
 ll dp[200005];
int vis2[200005];
ll dfs(int node,int mid,ll arr[] ){
    dp[node]=1;
    vis[node]=true;
    vis2[node]=true;
    for(auto i: adj[node])
    {
        if(!vis[i] && arr[i]<=mid){
          dp[node]= max(dp[node],1+ dfs(i,mid,arr));
        }else if(vis2[i]){
            dp[node]=inf;break;
        }
    }
    vis2[node]=false;
    return dp[node];
}
bool check(ll mid, ll k, ll n, ll arr[]){
   
    for(int i=1;i<=n;i++){vis[i]=0;vis2[i]=0;dp[i]=0;}
    for(int i=1;i<=n;i++){
        if(!vis[i] && arr[i]<=mid){dfs(i,mid,arr);}
    }
    bool f=0;
   // for(int i=1;i<=n;i++)cout<<dp[i]<<endl;
    for(int i=1;i<=n;i++){
       if(dp[i]>=k){
         f=1;break;
       }
    }return f;
}
 void solve(){
       ll n,m,k;cin>>n>>m>>k;
      ll arr[n+1];
       for(int i=1;i<=n;i++)cin>>arr[i];
      for(int i=0;i<m;i++)
      {
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
      }
       ll start=1;ll end=2e9;
     while(end-start>1){
        ll mid = (start + end ) /2;
        if(check(mid,k,n,arr)){
           end = mid;
        }else{
            start = mid + 1;
        }
     }
     if(end==2e9){
        cout<<-1<<endl;return;
     }
     if(check(start,k,n,arr)){
        cout<<start<<endl;
     }else{
        cout<<end<<endl;
     }

return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
// cin>>t;
t=1;
while(t--)
solve();
return 0;
}