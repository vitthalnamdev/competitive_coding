#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

bool check(ll mid, int k,ll arr[], ll n)
{
  int cnt=0;
  ll curr=0;
  for(int i=0;i<n;i++){
    if(arr[i]>mid){return false;}
    curr+=arr[i];
    if(curr==mid){curr=0;cnt++;}
    else if(curr>mid){curr=arr[i];cnt++;}
  }
  if(curr>0)cnt++;
  return cnt<=k;
}

 void solve(){
      int n,k;cin>>n>>k;
      ll arr[n];
      for(int i=0;i<n;i++)cin>>arr[i]; 

     ll start = 0,end = 1e18;
    //  cout<<check(11,k,arr,n)<<endl;
     while(end-start>1){
        ll mid = (start + (end - start ) /2 );
        if(check(mid,k,arr,n)){
            end = mid;
        }else{
            start = mid+1;
        }
     }
     if(check(start,k,arr,n)){
        cout<<start<<endl;
     }else
     cout<<end<<endl;


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