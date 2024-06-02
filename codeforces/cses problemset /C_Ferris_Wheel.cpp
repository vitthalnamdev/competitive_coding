#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
  ll n,x;cin>>n>>x;
  ll arr[n];
  for(int i=0;i<n;i++)cin>>arr[i];
  sort(arr,arr+n);
  ll ans=1;
  ll p1=0,p2=n-1;
  ll temp = x;
  int cnt=0;
  
  while(p2>=p1)
  {
     if(temp-arr[p2]>=0 && cnt<2){
       temp-=arr[p2];p2--;cnt++;
     }else if(temp-arr[p1]>=0 && cnt<2){
       temp-=arr[p1];p1++;cnt++;
     }else{
       temp=x;ans++;
       cnt=0;
     }
  }
  cout<<ans<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t=1;
// cin>>t;
while(t--){
solve();
}
}