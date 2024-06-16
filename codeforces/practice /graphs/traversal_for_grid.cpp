#include<bits/stdc++.h>
using namespace std;
int vis[1001][1001];
vector<vector<pair<int,int>>>parent(1001,vector<pair<int,int>>(1001));
class gridGraph{
public:
 
bool istrue(int a,int b,vector<vector<int>>&arr){
    int n = arr.size();int m = arr[0].size();
    
    return a>=0 && b>=0 && a<n && b<m && arr[a][b];
}
 
void dfs(int a, int b,vector<vector<int>>&arr){
   vis[a][b]=1;
   vector<int>dir = { 1, -1 };
   for(auto i: dir){
       if(istrue(a+i,b,arr) && !vis[a+i][b]){
          
          dfs(a+i,b,arr);
       }
       if(istrue(a,b+i,arr) && !vis[a][b+i]){
         dfs(a,b+i,arr);
      }
   }
}
 
void bfs(int a, int b, vector<vector<int>>&arr)
{
    queue<pair<int,int>>q;
    
    q.push({a,b});
    vector<int>dir = {1,-1};
    while(!q.empty())
    {
         auto top = q.front();
         //cout<<top.first<<" "<<top.second<<endl;
         q.pop();
         if(vis[top.first][top.second]){continue;}
         vis[top.first][top.second] = 1;
          a = top.first;b = top.second;
         for(auto i: dir ){
          
         if(istrue(a+i,b,arr) && !vis[a+i][b]){   
            q.push({a+i,b}); 
            parent[a+i][b] = {a,b};
         }
         if(istrue(a,b+i,arr) && !vis[a][b+i]){
 
            q.push({a,b+i}); 
            parent[a][b+i] = {a,b};
         }
     }
    }
}
void getpath(pair<int,int>end,pair<int,int>start){
    string ans = "";
   while(end!=start){
       auto par = parent[end.first][end.second];
       
       int num  = end.first - par.first;
       if(num == 1){
           ans+='D';
       }else if(num == -1){
           ans+='U';
       }
       num = end.second - par.second;
       if(num == 1){
          ans+='R';
       }else if(num == -1){
         ans+='L';
       }
       end = par;
   }
   reverse(ans.begin(),ans.end());
   cout<<ans.size()<<endl;
   cout<<ans<<endl;
}
};
 
 
int main(){
int n,m;cin>>n>>m;
vector<vector<int>>arr(n,vector<int>(m,0));
 
gridGraph g; pair<int,int>start, end ;
for(int i=0;i<n;i++){
string a;cin>>a;
for(int j=0;j<m;j++){
    if(a[j]=='.'){arr[i][j]=1;}
    if(a[j]=='A'){start = {i,j};arr[i][j]=1;}
    if(a[j]=='B'){end = {i,j};arr[i][j]=1;}
}
}
g.bfs(start.first,start.second,arr);  
 if (!vis[end.first][end.second]){
    cout<<"NO"<<endl;
 }else{
    cout<<"YES"<<endl;
    
  g.getpath(end,start);   
 }
}