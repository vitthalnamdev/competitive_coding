#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
ll dist[501][501];
int vis[501][501];
bool istrue(int i, int j, vector<vector<ll>>&cost){
    return i>=0 && j>=0 && i<(int)cost.size() && j<(int)cost[0].size();
}
void dij(int i, int j, vector<vector<ll>>&cost){
set<pair<ll,pair<int,int>>>s;
s.insert({0,{i,j}});
vector<int>dir= {-1,1};
while(!s.empty())
{
   auto top = *s.begin();
   s.erase(s.begin());
   auto corr = top.second;
   int x = corr.first;int y = corr.second;
   if(vis[x][y]){continue;}
   vis[x][y]=1;
   for(auto k:dir){
     if(istrue(x+k,y,cost)){
        if(dist[x+k][y]>max(dist[x][y],abs(cost[x][y] - cost[x+k][y]))){
          dist[x+k][y] = max(dist[x][y],abs(cost[x][y] - cost[x+k][y]));
          s.insert({dist[x+k][y],{x+k,y}});
        }  
     }
     if(istrue(x,y+k,cost)){
       if(dist[x][y+k]>max(dist[x][y],abs(cost[x][y] - cost[x][y+k]))){
          dist[x][y+k] = max(dist[x][y],abs(cost[x][y] - cost[x][y+k]));
          s.insert({dist[x][y+k],{x,y+k}});
        } 
     }
   }
}
}
void solve(){
int n,m;cin>>n>>m;
vector<vector<ll>>cost(n,vector<ll>(m+1,LLONG_MAX));
vector<vector<int>>pres(n,vector<int>(m+1,0));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        dist[i][j]=LLONG_MAX;
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>cost[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
       cin>>pres[i][j];
    }
}
pair<int,int>start = {-1,-1};
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    if(pres[i][j]){
        start={i,j};break;
    }
  }
}
if(start.first==-1){
    cout<<0<<endl;return;
}
dist[start.first][start.second]=0;
dij(start.first,start.second,cost);
ll ans= 0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        
        if(pres[i][j]){
            ans=max(ans,dist[i][j]);
        }
    } 
}
cout<<ans<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
freopen("ccski.in", "r", stdin);
freopen("ccski.out", "w", stdout);
int t=1;
while(t--){
solve();
}
}