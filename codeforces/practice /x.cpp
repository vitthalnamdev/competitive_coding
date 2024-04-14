#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

void solve(){
   ll n;cin>>n;
   ll sum=0;
   for(int i=1;i<=n;i++){
     sum+=(i*(2*i-1));
   }
   cout<<sum<<" "<<2*n<<endl;
   for(int i=n;i>=1;i--){
     cout<<1<<" "<<i<<" ";
     for(int j=1;j<=n;j++)cout<<j<<" ";
     cout<<endl;
     cout<<2<<" "<<i<<" ";
     for(int j=1;j<=n;j++)cout<<j<<" ";
     cout<<endl;
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