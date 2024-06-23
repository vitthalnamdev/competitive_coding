#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
ll n, k;cin>>n>>k;
if(k==1){
    cout<<"YES"<<endl;
    cout<<n<<endl;return;
}
if(n<(k*(k+1)/2)){
    cout<<"NO"<<endl;return;
}else if(n==8 && k==3 || n==4 && k==2) {
     cout<<"NO"<<endl;return;
     
}
ll ans[k];
 ll left = n - (k*(k+1)) / 2;
    ll u = left / k;
    left%=k;
for(int i=0;i<k;i++){
    ans[i]=i+1 + u ;
}
for(int i=k-1;i>=1;i--){
    while(left>0 && ans[i]<2*ans[i-1]){
      ans[i]++;left--;
    }
    if(left==0){
        break;
    }
}
cout<<"YES"<<endl;
for(int i=0;i<k;i++){
    cout<<ans[i]<<" ";
}
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
//freopen('problemname.in', 'r', stdin);
//freopen('problemname.out', 'w', stdout);
int t=1;
while(t--){
solve();
}
}