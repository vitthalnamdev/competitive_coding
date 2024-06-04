#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
int mod = 998244353;
 void solve(){
    ll n;cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];   
    ll ans=0;
    for(int j=0;j<32;j++){
      int curr=0;
      ll count[2]={0,0};
      ll value[2]={0,0};
      ll topw = (1<<j);
      for(ll i=0;i<n;i++)
      {
        curr+=((topw&arr[i])>0);
        curr%=2;
        ans+=((topw)*((((count[1^curr]*i)%mod-(value[1^curr]) + mod ))%mod));
        ans%=mod;
        ans+=((topw)*curr*(i+1));
        ans%=mod;
         count[curr]++;     
        value[curr]+=i;
      }
    }
    cout<<(ans%mod+mod)%mod<<endl;
return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
// cin>>t;
t=1;
while(t--)
solve();
return 0;
}