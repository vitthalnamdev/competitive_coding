#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
  bool cmp(pair<int,int>a,pair<int,int>b)
  {
     return a.second<b.second;
  }
void solve(){
 int n;cin>>n;
 vector<pair<int,int>>arr(n);
 for(int i=0;i<n;i++)cin>>arr[i].first>>arr[i].second;
 sort(arr.begin(),arr.end(),cmp);
 int ans=0;
 int end = 0;
  for(int i=0;i<n;i++){
     if(end <= arr[i].first){
          end = arr[i].second;ans++;
     }
  }
 cout<<ans<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t=1;
while(t--){
solve();
}
}