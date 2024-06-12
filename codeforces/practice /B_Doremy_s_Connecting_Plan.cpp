#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
 ll n,c;cin>>n>>c;
 ll arr[n+1];
 for(int i=1;i<=n;i++)cin>>arr[i];
 vector<pair<ll,ll>>check;
 ll start = arr[1]; 
 for(ll i=2;i<=n;i++){
    check.push_back({c*i-arr[i],arr[i]});
 }
 sort(check.begin(),check.end());
 for(int i=0;i<check.size();i++){
    if(check[i].first>start){
        cout<<"No"<<endl;
        return;
    }
   start+=check[i].second;
 }
 cout<<"Yes"<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
while(t--){
solve();
}
}