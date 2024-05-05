#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
ll score(ll ini , ll p[],ll arr[],ll n,ll k)
{
   ll ans=0;
   vector<int>vis(n+1,0);ll prev=0;
   while(!vis[ini] && k>0){
      vis[ini]=1;
      ll now = prev+arr[ini]*k; 
      prev+=arr[ini];k--;
      ini=p[ini];
      ans=max(ans,now);
   }
   return ans;
}
 void solve(){
       ll n,k,b,s;cin>>n>>k>>b>>s;
        ll p[n+1];
        ll arr[n+1];
        for(int i=1;i<=n;i++)cin>>p[i];
        for(int i=1;i<=n;i++)cin>>arr[i];
     ll bodya = score(b,p,arr,n,k);
     ll sasha = score(s,p,arr,n,k);  
    // cout<<bodya<<" "<<sasha<<endl;  
     if(bodya==sasha){
        cout<<"Draw"<<endl;
     }else if(bodya > sasha){
        cout<<"Bodya"<<endl;
     }else {
        cout<<"Sasha"<<endl;
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