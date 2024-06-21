#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
ll n, k;cin>>n>>k;
ll sum = 0;
ll last = n;
for(int i = 1;i<=n;i++){
    sum+=(abs(last - i));
    last--;
}
 
if(k%2 || sum<k){
    cout<<"No"<<endl;return;
}
 
int arr[n+1];
for(int i=1;i<=n;i++){  
    arr[i]=i;
}
 
last = n;
ll ini = 1;
 
while(k>0 && last>0 && ini<=n){
   if(k>=((last-ini)*2)){
    
       k-=(2*abs(last-ini));
       if(arr[last]==last)
       swap(arr[last],arr[ini]);
        
       ini++;last--;
   }else{
      last--;
   }
}
 
cout<<"Yes"<<endl;
for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
}cout<<endl;
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