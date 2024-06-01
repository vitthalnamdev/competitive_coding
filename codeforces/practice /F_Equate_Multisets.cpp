#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
int n;cin>>n;
ll arr[n];
ll brr[n];
for(int i=0;i<n;i++)cin>>arr[i];
for(int i=0;i<n;i++)cin>>brr[i];
map<ll,ll>cnt;
  for(int i=0;i<n;i++){
     ll temp = brr[i];
     while(temp<1e9){
        cnt[temp]++;temp*=2;
     }brr[i]/=2;
     while(brr[i]>0){
      cnt[brr[i]]++;brr[i]/=2;
     }
  }
   bool f=1;
   
   if(f){
    cout<<"YES"<<endl;
   }  else {
    cout<<"NO"<<endl;
   }
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
while(t--){
solve();
}
}