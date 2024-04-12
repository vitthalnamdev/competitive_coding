#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       ll n,x;cin>>n>>x;
       ll ans=0;
       bool f=1;
       int cnt=0;
       for(int i=0;i<63;i++){
           if((x&(1LL<<i))>0 && (n&(1LL<<i))==0){
             f=0;break;     
           }
           if((x&(1LL<<i))>0 && (n&(1LL<<i))>0){
              ans|=(1LL<<i);cnt++;
           }
            if((x&(1LL<<i))==0 && (n&(1LL<<i))>0){
              if(cnt==0){
                int nn=i+1;
                 ans=(1LL<<nn);
              }else{
                f=0;break;
              }
           }
       }
    if(f==0 || ans<n){
        cout<<-1<<endl;return;
    }

  cout<<ans<<endl;

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