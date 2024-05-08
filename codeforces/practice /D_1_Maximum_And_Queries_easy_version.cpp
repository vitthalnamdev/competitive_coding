#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

bool check(ll mid, ll arr[],ll n,ll k)
{
    ll cnt=0;
    for(ll i=0;i<n;i++){
        ll temp=0;
        for(ll j=0;j<64;j++){
            if(((mid)&(1LL<<j))){
             if((arr[i]&(1LL<<j))==0){
               cnt+=((1LL<<j)-temp);
               temp=0;
             }
            }else{
                temp += ((1LL<<j)&arr[i]);
            }
        }
        if(cnt<0){
          return 0;
        }   
    }
    return cnt<=k;
}
// 1011011101000011100
//10010001101111110000
 void solve(){
       ll n,q;cin>>n>>q;
       ll arr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
        
       while(q--)
       {
        ll k;cin>>k; 
        ll start = 0, end =LLONG_MAX;
    cout<<check(637468,arr,n,k)<<endl;
        // while(end-start > 1)
        // {
        //     ll mid = (start + (end - start)/2);
        //   //  cout<<mid<<endl;
        //     if(check(mid,arr,n,k)){
        //         start= mid;
        //     }else{
        //         end= mid -1;
        //     }
        // }

        // if(check(end,arr,n,k))
        // {
        //     cout<<end<<endl;
        // }else{
        //     cout<<start<<endl;
        // }
       }
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