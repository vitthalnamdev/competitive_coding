#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
  int n;cin>>n;
  vector<pair<int,int>>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i].first>>arr[i].second;
  }
  sort(arr.begin(),arr.end());
  int ans=0;
  set<int>end;
  for(int i=0;i<n;i++){
    while(end.size()>0 && arr[i].first>=(*end.begin())){
        end.erase(end.begin());
    }
    end.insert(arr[i].second);
    
    int now = end.size();   
    ans=max(ans,now);
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