#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;
       if(n%2==1){
         cout<<0<<endl;
       }else{
         int left = n/2;
         int ans=pow(2,left);
         cout<<ans<<endl;
       }





return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
// cin>>t;
 t=1;
while(t--)
solve();
return 0;
}