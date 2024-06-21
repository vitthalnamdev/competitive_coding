#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
ll n, a, b;cin>>n>>a>>b;
if(b>a){
   ll to = min(n,b-a);
   ll b1 = b-to;
   ll num = b*(b+1)/2 - b1*(b1+1)/2; 
   cout<<(n-to)*a + num<<endl;
}else{
    cout<<n*a<<endl;
}
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