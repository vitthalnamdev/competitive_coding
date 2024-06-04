#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
int vis[100005];
vector<int>adj[100005];
int color[100005];
   bool dfs(int node,int Color){	
       color[node]=Color;
       vis[node]=1;       
       for(auto i:adj[node]){
           if(!vis[i]){
            bool a=dfs(i,Color^1);
            if(a==false)return false;
           }
           else if(Color==color[i]){               
               return false;
           }
       }
       return true; 
   }
	bool isBipartite(int V ){
	    //for(int i=0;i<=100000;i++)vis[i]=0,color[i]=0;
	    for(int i=1;i<=V;i++){
	        if(!vis[i]){
	            bool ans=dfs(i,0);
	            if(ans==false)return false;
	        }
	    }
	  
	    return true;
	}
 void solve(){
      int n;cin>>n;int m;cin>>m;
      vector<pair<int,int>>arr(m);
      for(int i=0;i<m;i++){
         int a,b;cin>>a>>b;
         arr[i].first=a;arr[i].second=b;
         adj[a].push_back(b);
         adj[b].push_back(a);
      }
      bool check = isBipartite(n);
      if(check == false){
         cout<<"IMPOSSIBLE"<<endl;
         return;
      }
       
      for(int i=1;i<=n;i++){
         cout<<color[i]+1<<" ";
      }cout<<endl;
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