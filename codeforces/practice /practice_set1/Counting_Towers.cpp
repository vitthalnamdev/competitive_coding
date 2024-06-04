#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
ll single_value[1000001];
ll double_value[1000001];
int mod = 1e9+7;
 void solve(){
    ll n;cin>>n;
cout<<(single_value[n]+double_value[n])%mod<<endl;

return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

int t;
cin>>t;
ll prev=0;
//dp[0]=1;dp[1]=2;
single_value[1]=1;double_value[1]=1;
for(int i=2;i<=1000000;i++){
   single_value[i]=4*single_value[i-1]%mod+double_value[i-1]%mod;
   double_value[i]=single_value[i-1]%mod+2*double_value[i-1]%mod;
   single_value[i]%=mod;
   double_value[i]%=mod;
}
// t=1;
while(t--)
solve();
return 0;
}