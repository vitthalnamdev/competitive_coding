#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
    ll n;cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    ll ans=0;
    ans=(n*(n+1))/2;
    ll cnt=0;ll maxi=0;
    for(int i=0;i<n;i++){
      if((arr[i]%2)==1){
        cnt++;
      }else{
        maxi=max(maxi,cnt);
         ans-=((cnt*(cnt+1))/2);
         cnt=0;
      }
    }
     ans-=((cnt*(cnt+1))/2);
     maxi=max(maxi,cnt);
   
    ans+=(maxi*(maxi+1))/2;
   
    
    ll curr=LLONG_MAX;
    for(int i=1;i<maxi;i++){
        ll prev=i-1;ll above=maxi-i;
        prev=(prev*(prev+1)/2);
        above=(above*(above+1))/2;
         curr=min(curr,prev+above);

    }   
    cout<<ans-curr<<endl;



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