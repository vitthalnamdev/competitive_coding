#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll INF = LLONG_MAX;
 vector<ll> d(2501, INF);
 vector<int>adj1[2501];
 vector<int>adj2[2501];
 int change = 0;
int vis1[2505];
int vis2[2505];
struct edges{
  public:
  int a;
  int b;
  int cost;
  
};
void dfs1(int node)
{
    vis1[node] = true;
    for(auto j: adj1[node])
    {
        if(!vis1[j]){
            dfs1(j);
        }
    }
}
void dfs2(int node)
{
    vis2[node] = true;
    for(auto j: adj2[node])
    {
        if(!vis2[j]){
            dfs2(j);
        }
    }
}
vector<edges>Edges;
void solve(int v, int n)
{
    int cnt = 0;
    dfs1(1);dfs2(n);
    d[v] = 0;
    for (;;) {
        cnt++;
        bool any = false;
        if(cnt>=n+3){break;}
        for (edges e : Edges)
            if (d[e.a] < INF)
                if (d[e.b] > d[e.a] + e.cost) {
                    d[e.b] = d[e.a] + e.cost;
                    if(cnt == n &&  vis1[e.b] && vis2[e.b]){
                        change = 1;return ;
                    }
                    any = true;
                }

        if (!any)
            break;
    } 
     
}

int main(){
 int n,m;cin>>n>>m;
 for(int i=0;i<m;i++){
    int aa, bb, costt;cin>>aa>>bb>>costt;
    adj1[aa].push_back(bb);
    adj2[bb].push_back(aa);
    costt*=-1;
    Edges.push_back({aa,bb,costt});
 }
 solve(1,n);
   if(change){
    cout<<-1<<endl;return 0;
   }
  cout<<-1*d[n]<<endl;
}