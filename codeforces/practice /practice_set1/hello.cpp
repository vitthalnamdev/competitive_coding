#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    int mn=min(a,b);int mx=max(a,b);
    int cnt=0;
    for(int i=mn;i<=mx;i++){
      if(i==c || i==d){
        cnt++;
      }
    }    
    cnt%=2;
   if(cnt){
   cout<<"YES"<<endl;
   }else cout<<"NO"<<endl;

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