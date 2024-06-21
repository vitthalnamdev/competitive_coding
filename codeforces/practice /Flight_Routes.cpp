#include<bits/stdc++.h>
using namespace std;
#define ll long long 
multiset<ll,greater<ll>>dist[100005];
int vis[100005];
vector<pair<ll,ll>>adj[100005];
void shortest(){
   multiset<pair<ll,ll>>s;
   s.insert({0,1});
   while(!s.empty())
   {
      auto top = *s.begin();
     // cout<<top.second<<endl;
      s.erase(s.begin());
      if(vis[top.second]>10){continue;}
      vis[top.second]++;
      for(auto j:adj[top.second]){
             if(top.first +j.second<*dist[j.first].begin()){
                 dist[j.first].erase(dist[j.first].begin());
                 dist[j.first].insert(top.first+j.second);
                 s.insert({top.first+j.second,j.first});
             }
          
      }
   }
}
void solve(){
    int n;cin>>n;
    int m,k;cin>>m>>k;
    for(int i=0;i<m;i++){
        ll a, b, c;cin>>a>>b>>c;
        adj[a].push_back({b,c});
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=10;j++){
           if(i==1 && j==1){
              dist[i].insert(0);continue;
           }
           dist[i].insert(LLONG_MAX);
        }
    }
    shortest();
    multiset<ll>ans;
    for(ll i:dist[n]){ans.insert(i);}
    for(ll i:ans){
        if(k==0)break;
        k--;cout<<i<<" ";
    }
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