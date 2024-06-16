#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
int x,y;cin>>x>>y;
  for(int i=1;i<=1000;i++){
    int now = (x*10 + 100*i)/(10+i);
    if(now>=y){
        cout<<i<<endl;return;
    }
  }
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
while(t--){
solve();
}
}