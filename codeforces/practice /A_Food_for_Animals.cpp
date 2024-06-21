#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
ll a, b, c, x,y;
cin>>a>>b>>c>>x>>y;
x-=a;y-=b;
if(x>0){
    c-=x;
}
if(y>0){
    c-=y;
}
if(c>=0){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
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