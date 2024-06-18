#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int a = 0, p = 0;
bool istrue(int i, int j, vector<vector<int>>&grid){
    return i>=0 && j>=0 && i<(int)grid.size() && j<(int)grid.size() && grid[i][j];
}
void dfs(vector<vector<int>>&grid, int i, int j,vector<vector<int>>&vis){
    vis[i][j]=1;a++; 
    int n=grid.size(); 
    
    vector<int>dir = {-1, 1};
    for(auto k: dir){
      if(!istrue(i+k,j,grid)){
          p++;
      }
      if(istrue(i+k,j,grid) && !vis[i+k][j]){
         dfs(grid, i+k, j,vis); 
      }
      if(!istrue(i,j+k,grid)){
        
         p++;
      }
      if(istrue(i,j+k,grid) && !vis[i][j+k]){
          dfs(grid, i, j+k,vis); 
      }
    }
}
void solve(){
  int n;cin>>n;
  vector<vector<int>>grid(n+1,vector<int>(n+1,0));
  for(int i=0;i<n;i++){
      string s;cin>>s;
      for(int j=0;j<n;j++){
          if(s[j] == '#'){
              grid[i][j]=1;
          }
      }
  } 
  
  vector<vector<int>>vis(n+1,vector<int>(n+1,0));
  
  int area = 0;int perimeter = 0;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(!vis[i][j] && grid[i][j]){
             
            dfs(grid,i,j,vis);
            if(a>area){
                area = a;
                perimeter = p;
            }else if(a==area){
                perimeter = min(perimeter,p);
            }
            a = 0;p = 0;
        }
         
    }
  }
  cout<<area<<" "<<perimeter<<endl;
}
int main(){
 

std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
freopen("perimeter.in", "r", stdin);
freopen("perimeter.out", "w", stdout);
int t=1;
while(t--){
solve();
}
}