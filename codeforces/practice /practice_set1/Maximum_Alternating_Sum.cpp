#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;
       ll arr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
       sort(arr,arr+n);
       int p1=0,p2=n-1;
       ll sum=0;
       while(p2>p1){
           sum+=(arr[p2--]-arr[p1++]);
       }
      if(p1==p2){
        sum+=arr[p1];
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