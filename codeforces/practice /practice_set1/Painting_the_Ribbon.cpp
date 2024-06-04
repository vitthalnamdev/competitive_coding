#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n,m,k;cin>>n>>m>>k;
      int x=n-n/m - (n%m>0);
      if(x<=k){
        cout<<"NO"<<endl;
      }else{
        cout<<"YES"<<endl;
      }



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