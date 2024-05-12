#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
    ll n;cin>>n;ll arr[n];ll cost[n];
    for(int i=0;i<n;i++)cin>>arr[i],cin>>cost[i];
    ll ans=1;bool f=1;
    ll first_number;ll second_number;
    int prev=cost[0];
    for(int i=1;i<n;i++){
        ll Gcd = (gcd(cost[i],prev));
        Gcd = (cost[i]*prev)/Gcd;
        first_number = Gcd / cost[i];
        second_number = Gcd / prev;
        ll first_check=arr[i]%first_number;
        ll second_check=arr[i-1]%second_number;
        if(second_check || first_check ){
           ans++; prev=cost[i];
        } 
        
    }
   cout<<ans<<endl;
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