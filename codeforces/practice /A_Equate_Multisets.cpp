#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
ll n;cin>>n;
multiset<ll>a,b;
for(int i=0;i<n;i++){
    ll x;cin>>x;
    while(x%2==0)x/=2;
    a.insert(x);
}
for(int i=0;i<n;i++){
    ll x;cin>>x;
    b.insert(x);
}
while(!b.empty()){
    ll x = *b.rbegin();
    auto now = a.find(x);
    if(now!=a.end()){
        a.erase(a.find(x));
        b.erase(b.find(x));
    }else{
        b.erase(b.find(x));
        if(x==1){continue;}
        b.insert(x/2);
    }
}
if(a.size()==0){cout<<"YES"<<endl;}
else cout<<"NO"<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
while(t--){
solve();
}
}