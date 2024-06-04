#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
int mod= 1e9+7;
 void solve(){
       ll n;cin>>n;
       ll arr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
       sort(arr,arr+n);
       ll sum=0;
       for(int i=0;i<n;i++){
         if(sum+arr[i]>sum*arr[i]){
            sum+=arr[i];sum%=mod;
         }else{
           sum*=arr[i];sum%=mod;
         }
       }

 cout<<sum<<endl;



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