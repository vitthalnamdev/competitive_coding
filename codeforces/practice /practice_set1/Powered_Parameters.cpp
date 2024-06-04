#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       ll n;cin>>n;
     vector<pair<double,int>>arr(n);
       for(int i=0;i<n;i++)cin>>arr[i].first,arr[i].second = i+1;
       for(int i=0;i<n;i++){
          arr[i].first=log2(arr[i].first);
       }
sort(arr.begin(),arr.end());
// for(int i=0;i<n;i++){
//     cout<<arr[i].first<<" "<<arr[i].second<<endl;
// }
   ll ans=0;
   for(int i=0;i<n;i++){
      int ind = upper_bound(arr.begin(),arr.end(),make_pair((arr[i].first/arr[i].second),INT_MAX))-arr.begin();
      ans+=(ind);
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