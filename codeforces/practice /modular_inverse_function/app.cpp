#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
int mod = 1e9+7;

ll inv(int a) {
  return a <= 1 ? a : mod - (long long)(mod/a) * inv(mod % a) % mod;
}
 void solve(){
       int x;cin>>x;
  cout<<log2(x)<<endl;




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
