#include<bits/stdc++.h>
using namespace std;
 #define ll long long 
void solve(){
int n,m,k;cin>>n>>m>>k;
int par[n];int apar[m];
for(int i=0;i<n;i++)cin>>par[i];
for(int i=0;i<m;i++)cin>>apar[i];
sort(par,par+n);
sort(apar,apar+m);
int p1=0;
int ans=0;
for(int i=0;i<n;i++)
{
  if(p1==m){break;}
  if(par[i]+k<apar[p1]){
    continue;
  }else if(par[i]-k>apar[p1])
  {
    i--;p1++;continue;
  }
  p1++;ans++;
}
cout<<ans<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t=1;
// cin>>t;
while(t--){
solve();
}
}