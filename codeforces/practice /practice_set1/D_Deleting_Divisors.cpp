#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
    ll n;cin>>n;
    if(n==1){
        cout<<"Bob"<<endl;return;
    }
    for(int i=0;i<32;i++){
      if(((n|(1<<i))==(1<<i))){
         if(i%2==0){
           cout<<"Alice"<<endl;
         }else{
           cout<<"Bob"<<endl;
         }return;
      }
    }
    if(n%2==0){
        cout<<"Alice"<<endl;
    }else{
        cout<<"Bob"<<endl;
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