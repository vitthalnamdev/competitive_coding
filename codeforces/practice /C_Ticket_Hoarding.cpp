#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       ll n,m,k;cin>>n>>m>>k;
       ll arr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
        
       ll ans=0;
       vector<pair<ll,ll>>brr(n);      
       for(int i=0;i<n;i++){brr[i].first=arr[i];brr[i].second=i;}
        
       sort(brr.begin(),brr.end());
       for(int i=0;i<n;i++){
          ll left=min(k,m);
          ans+=(left*brr[i].first);
          k-=left;ans+=(k*left);
       }cout<<ans<<endl;
     
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