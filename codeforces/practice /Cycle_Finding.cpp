#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
vector<vector<int>>edges;
int parent[100006];
int check[100006];
void bellman(int n)
{
   for(int i=0;i<=n;i++){
     for(int j=0;j<edges.size();j++){
         
     }
   }
}
 void solve(){
   int n,m;cin>>n>>m;
   for(int i=0;i<m;i++){
    int a,b,c;cin>>a>>b>>c;
    edges.push_back({a,b,c});
   }   
   for(int i=1;i<=n;i++)parent[i]=-1;
   bellman(n);
    vector<int>ans;
    for(int i=1;i<=n;i++){

    }
return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
cin>>t;
// t=1;
while(t--)
solve();
return 0;
}