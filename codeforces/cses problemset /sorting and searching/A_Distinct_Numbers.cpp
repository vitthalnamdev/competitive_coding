#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
  int n;cin>>n;
  set<int>s;
  for(int i=0;i<n;i++){
    int x;cin>>x;s.insert(x);
  }
  cout<<s.size()<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t=1;
// cin>>t;
while(t--){
solve();
}
}