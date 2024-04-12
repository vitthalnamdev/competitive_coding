#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

bool check(ll ele,ll arr[],int n)
{
   
}
 void solve(){
       int n;cin>>n;
       ll arr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
       ll start=0,end=1e18;
       ll mid;
       while(end-start>1)
       {
         mid=(end-start)/2+start;
         if(check(mid,arr,n)){
           end=mid;
         }else{
          start=mid+1;
         }
       }
       if(check(start,arr,n)){
        cout<<start<<endl;
       }else{
        cout<<end<<endl;
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