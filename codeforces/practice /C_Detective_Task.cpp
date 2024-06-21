#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
string s;cin>>s;
int cnt = 0;
for(auto c:s){
  if(c=='1'){cnt=1;}
  else if(c=='?'){cnt++;}
  else {cnt++;break;}
}
cout<<cnt<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
//freopen('problemname.in', 'r', stdin);
//freopen('problemname.out', 'w', stdout);
int t;cin>>t;
while(t--){
solve();
}
}