#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
char arr[1001][1001];
int n,m;
int vis[1001][1001];
char parent[1001][1001];
string ans;
bool _getpath(pair<int,int>start,pair<int,int>end)
{     
     pair<int,int>curr=end;
     map<char,int>x,y;
     x['U']=0;x['D']=0;x['R']=-1;x['L']=1;
      y['U']=1;y['D']=-1;y['R']=0;y['L']=0;
     while(curr!=start){
        if(parent[curr.first][curr.second]=='s'){
            return false;
        }
        char now = (parent[curr.first][curr.second]);
        ans=now+ans;
        curr.first+=(y[now]);curr.second+=(x[now]); 
     }
   //  cout<<curr.first<<" "<<curr.second<<endl;
     return true;
}
bool e(int i,int j)
{
    return (i>=0 && j>=0 && i<n && j<m && arr[i][j]!='#' && !vis[i][j]);
}
void bfs(pair<int,int>start)
{
    queue<pair<int,int>>q;
    q.push(start); 
    while(!q.empty())
    {
        auto top=q.front();
        q.pop();
        int i=top.first;int j=top.second;
        
        if(vis[i][j]){continue;}
        vis[i][j]=1;
        if(e(i+1,j)){
           q.push({i+1,j});
           parent[i+1][j]='D';
        }
        if(e(i-1,j))
        {
           q.push({i-1,j});
           parent[i-1][j]='U';
        }
        if(e(i,j+1))
        {
           q.push({i,j+1});
           parent[i][j+1]='R';
        }
        if(e(i,j-1))
        {
           q.push({i,j-1});
           parent[i][j-1]='L';
        }
    }
}
 void solve(){
       cin>>n>>m;
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            parent[i][j]='s';
        }
       }
      pair<int,int>start,end;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='A'){start.first=i;start.second=j;arr[i][j]='.';}
            if(arr[i][j]=='B'){end.first=i;end.second=j;arr[i][j]='.';}
        }
      }
     bfs(start);
     //cout<<parent[end.first-1][end.second]<<endl;
     ans="";
     bool check = _getpath(start,end);
     if(check==0){
        cout<<"NO"<<endl;
     }else{
        cout<<"YES"<<endl;
        cout<<ans.length()<<endl;
        cout<<ans<<endl;
     }

return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
 
  t=1;
while(t--)
solve();
return 0;
}
