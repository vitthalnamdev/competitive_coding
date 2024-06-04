#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
/*Don't allow someone to treat you poorly just because you love them.*/
 void solve(){
    ll n;cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    ll prev[n+1];prev[0]=0;
    ll sum=0;    
    for(int i=0;i<n;i++){
        sum+=arr[i];
        prev[i+1]=prev[i]+arr[i];
    }   
    ll mx=0,prevmax=0;
    for(int i=2;i<=n;i++){
       mx=max(mx,prevmax-prev[i]);       
       prevmax=max(prevmax,prev[i-1]);     
    }
   cout<<sum+2*mx<<endl;
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