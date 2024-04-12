#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
int vis[1001][1001];
string ans;
bool f;
void dfs(vector<string>&arr,int n,int m,int i,int j,string curr)
{
   queue<pair<pair<int,int>,string>>q;
   q.push(make_pair(make_pair(i,j),""));
   while(!q.empty()){
     auto top=q.front();
     auto newtop=top.first;
     q.pop();
     vis[newtop.first][newtop.second]=1;
     if(arr[newtop.first][newtop.second]=='#'){continue;}
     if(arr[newtop.first][newtop.second]=='B'){ans=top.second;f=1;break;}
     
     vis[newtop.first][newtop.second]=1;
    if(newtop.first+1<n && !vis[newtop.first+1][newtop.second])
    {
       q.push(make_pair(make_pair(newtop.first+1,newtop.second),top.second+'D'));
    }
    if(newtop.first-1>=0 && !vis[newtop.first-1][newtop.second])
    {
       q.push(make_pair(make_pair(newtop.first-1,newtop.second),top.second+'U'));
    }
    if(newtop.second+1<m && !vis[newtop.first][newtop.second+1])
    {
       q.push(make_pair(make_pair(newtop.first,newtop.second+1),top.second+'R'));
    }
    if(newtop.second-1>=0 && !vis[newtop.first][newtop.second-1])
    {
       q.push(make_pair(make_pair(newtop.first,newtop.second-1),top.second+'L'));
    }
   }
}
 void solve(){
       int n,m;cin>>n>>m;
       vector<string>arr(n);
       //createlist(arr,n,m);
       for(int i=0;i<n;i++){
        string s;cin>>s;
        arr[i]=s;
       }int cnt=0;
       for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
            if(arr[i][j]=='A' && !vis[i][j]){       
              dfs(arr,n,m,i,j,"");
            }
          }
       }
        
       if(f==0){
        cout<<"NO"<<endl;return;
       }
       cout<<"YES"<<endl;
      // reverse(ans.begin(),ans.end());
       cout<<ans.length()<<endl;
       cout<<ans<<endl;
 
 
return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
//cin>>t;
 t=1;
while(t--)
solve();
return 0;
}