#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
vector<vector<pair<int,int>>>parent(1001,vector<pair<int,int>>(1001));
vector<pair<int,int>>monsters;
vector<string>arr;
int n,m;
vector<vector<int>>check(1001,vector<int>(1001,INT_MAX));
vector<pair<int,int>>moves={{-1,0},{1,0},{0,1},{0,-1}};
int vis[1001][1001];
void _get_path(pair<int,int>start,pair<int,int>end){
    vector<pair<int,int>>ans;
    while(end.first!=start.first || end.second!=start.second)
    {
       ans.push_back(parent[end.first][end.second]);
       end.first-=ans.back().first;end.second-=ans.back().second;         
    }
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        if(ans[i].first==1 && ans[i].second==0)
        {
          cout<<"D";
        }
        if(ans[i].first==0 && ans[i].second==1)
        {
          cout<<"R";
        }
        if(ans[i].first==-1 && ans[i].second==0){
          cout<<"U";
        }
        if(ans[i].first==0 && ans[i].second==-1){
          cout<<"L";
        }
    }cout<<endl;
}
bool istrue(int i, int j)
{
    return (i>=0 && j>=0 && i<n && j<m && !vis[i][j] && arr[i][j]!='#');
}
void bfs()
{
    queue<pair<int,int>>q;
    for(auto i:monsters)
    {
       q.push(i);check[i.first][i.second]=0;
    }
    while(!q.empty())
    {
       auto top=q.front();
       q.pop();
       for(auto j:moves)
       {
          if(istrue(top.first+j.first,top.second+j.second))
          {
             int toi=top.first+j.first;int toj=top.second+j.second;
             vis[toi][toj]=1;
             check[toi][toj]=min(check[toi][toj],1+check[top.first][top.second]);
             q.push({toi,toj});
          }
       }
    }
}
 
bool isvalid(int i,int j,int timer)
{
    return (i>=0 && j>=0 && i<n && j<m && arr[i][j]!='#' && !vis[i][j] && check[i][j]>timer);
}
void bfs2(pair<int,int>start){
    queue<pair<int,pair<int,int>>>q;
    q.push({0,start});vis[start.first][start.second]=1;
    while(!q.empty())
    {  
       auto top1=q.front();
       q.pop();int curr=top1.first;
       auto top=top1.second;
       for(auto j:moves)
       {  
          int toi=top.first+j.first;int toj=top.second+j.second;
          if(isvalid(top.first+j.first,top.second+j.second,curr+1))
          {
             vis[toi][toj]=1;
             parent[toi][toj]={j};
             q.push(make_pair(curr+1,make_pair(toi,toj)));
          }
       } 
    }
}
void solve(){
   cin>>n>>m;   
   arr.resize(n);
   for(int i=0;i<n;i++)cin>>arr[i];
   pair<int,int>start;
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i][j]=='A')start.first=i,start.second=j;
        else if(arr[i][j]=='M')monsters.push_back({i,j});
    }
   }
   bfs();
   
   for(int i=0;i<=1000;i++){
    for(int j=0;j<=1000;j++){
        vis[i][j]=0;
    }
   }
   bfs2(start);
  
    
   pair<int,int>point={-1,-1};
   for(int i=0;i<n;i++){
    if(vis[i][0]){point={i,0};break;}
    if(vis[i][m-1]){point={i,m-1};break;}
   }
   for(int i=0;i<m;i++){
    if(vis[0][i]){point={0,i};break;}
    if(vis[n-1][i]){point={n-1,i};break;}
   }
   if(point==make_pair(-1,-1)){
    cout<<"NO"<<endl;return;
   } 
   cout<<"YES"<<endl;
   _get_path(start,point);
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