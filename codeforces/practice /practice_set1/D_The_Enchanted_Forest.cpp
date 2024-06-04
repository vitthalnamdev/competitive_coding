#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       ll n;cin>>n;ll arr[n];
       ll k;cin>>k;
       for(int i=0;i<n;++i)
       cin>>arr[i];
       if(k>=n)
       {
          ll sum=0;
          for(int i=0;i<n;i++)sum+=arr[i];
          int left=k/n;
          cout<<sum+(2*k-1-n)*n/2<<'\n';
       }else{
        ll curr=0;ll ans=0;
         for(int i=0;i<k;i++){curr+=arr[i];}
          int p1=0;int p2=k-1;
          ans=max(ans,curr);
          for(int i=k;i<n;i++){
            curr+=(arr[i]-arr[i-k]);
            ans=max(ans,curr);
          }
          cout<<ans+(k*(k-1))/2<<endl;
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