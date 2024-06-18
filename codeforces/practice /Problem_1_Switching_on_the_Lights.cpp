#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int vis[105][105];
int light[105][105];
map<pair<int,int>,list<pair<int,int>>>adj;
bool istrue(int i, int j, int n){
  return i>=1 && j>=1 && i<=n && j<=n;
}
queue<pair<int,int>>newlit;
void dfs(int i, int j, int n){
    vis[i][j]=1;
    for(auto k:adj[{i,j}]){
		if(light[k.first][k.second]==0)
		newlit.push({k.first,k.second});
        light[k.first][k.second]=1;
    }
    vector<int>dir = {-1,1};
    for(auto k:dir){
       if(istrue(i+k,j,n) && !vis[i+k][j] && light[i+k][j]){
          dfs(i+k,j,n);
       }
       if(istrue(i,j+k,n) && !vis[i][j+k] && light[i][j+k]){
           dfs(i,j+k,n);
       }
    }
}
void solve(){
 
int n, m;cin>>n>>m;
for(int i=1;i<=m;i++){
    int x,y,a,b;cin>>x>>y>>a>>b;
    adj[{x,y}].push_back({a,b});
}
light[1][1]=1;
dfs(1,1,n);
  while(!newlit.empty()){ 
	  auto top = newlit.front();
	  newlit.pop();
	  if(vis[top.first][top.second]){continue;}
	  vector<int>dir = {-1,1};
	  for(auto i: dir){
		  if(istrue(top.first+i,top.second,n) && vis[top.first+i][top.second]){
			  dfs(top.first+i,top.second,n);
		  }
		  if(istrue(top.first,top.second+i,n) && vis[top.first][top.second+i]){
			  dfs(top.first,top.second+i,n);
		  }
	  }
  }
  

int cnt = 0;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(light[i][j]==1){
            cnt++;
        }
    }  
}
 
cout<<cnt<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
freopen("lightson.in", "r", stdin);
freopen("lightson.out", "w", stdout);
int t=1;
while(t--){
solve();
}
}
