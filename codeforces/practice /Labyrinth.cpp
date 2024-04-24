#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
char arr[1001][1001];
int n,m;
int vis[1001][1001];
vector<vector<pair<int,int>>>parent(1001,vector<pair<int,int>>(1001));
void _getpath(pair<int,int>start,pair<int,int>end)
{     
   vector<pair<int,int>> ans; 
	while(end.first != start.first or end.second != start.second)
	{
		ans.push_back(parent[end.first][end.second]);
		end.first -= ans.back().first;
		end.second -= ans.back().second;	
	}
  
	reverse(ans.begin(), ans.end());
	cout << ans.size() << endl;
	for(auto c: ans)
	{
		if(c.first == 1 and c.second ==0)
		{
			cout << 'D';
		}
		else if(c.first == -1 and c.second ==0)
		{
			cout << 'U';
		}
		else if(c.first == 0 and c.second == 1)
		{
			cout << 'R';
		}
		else if(c.first == 0 and c.second == -1)
		{
			cout << 'L';
		}
	}
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
           parent[i+1][j]={1,0};
        }
        if(e(i-1,j))
        {
           q.push({i-1,j});
           parent[i-1][j]={-1,0};
        }
        if(e(i,j+1))
        {
           q.push({i,j+1});
           parent[i][j+1]={0,1};
        }
        if(e(i,j-1))
        {
           q.push({i,j-1});
           parent[i][j-1]={0,-1};
        }
    }
}
 void solve(){
       cin>>n>>m;
      pair<int,int>start,end;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='A'){start.first=i;start.second=j;arr[i][j]='.';}
            if(arr[i][j]=='B'){end.first=i;end.second=j;arr[i][j]='.';}
        }
      }
     bfs(start);
     
     if(!vis[end.first][end.second]){
        cout<<"NO"<<endl;
     }else{
      cout<<"YES"<<endl;
        _getpath(start,end);
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
