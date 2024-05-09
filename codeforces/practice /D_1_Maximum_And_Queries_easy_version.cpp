#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
    ll n;cin>>n;ll q;cin>>q;
    ll brr[n];
    for(int i=0;i<n;i++)cin>>brr[i];
    while(q--)  
    {
        vector<ll>arr(n);
        for(int i=0;i<n;i++)arr[i]=brr[i];
        ll k;cin>>k;
        ll ans=0;
        for(ll i=60;i>=0;i--){
           ll sum = 0;
           ll now = (1LL<<i);
           for(int j=0;j<n;j++){
            ll temp = 0;
            if(((arr[j]&(1LL<<i)))==0){
              for(int l=0;l<i;l++){
                  temp += ((1LL<<l) & arr[j]);
              }
            }else {
                temp = now;
            }
            sum+=(now - temp );
             if(sum>1e18 || sum< 0){
                break;
             }
           }
            if(sum<0 || sum>1e18){
                continue;
            }
           if(sum<=k){
              ans|=(now);
              k-=sum;
              for(int j=0;j<n;j++){
                if(((arr[j]&(1LL<<i)))==0){
                 for(int l=0;l<i;l++){
                   if(arr[j]&(1LL<<l)){
                     arr[j]^=(1LL<<l);
                   }
                 }
                }
            } 
          } 
      }
      cout<<ans<<endl;   
    }
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