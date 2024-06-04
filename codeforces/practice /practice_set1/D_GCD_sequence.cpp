#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
  // this  problem is not completed till now. 
void solve(){
 int n;cin>>n;
  
 int arr[n+1];
 for(int i=0;i<n;i++)cin>>arr[i];
 arr[n]=arr[n-1];
//  for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;
 int cnt = 0;
 int last=gcd(arr[0],arr[1]);int lastnum1=arr[0];int lastnum2=arr[1];
 int lastlast=0;
 for(int i=2;i<n;i++){
    int now = gcd(arr[i],lastnum2);
    if(now<last){
     // cout<<i<<endl;
       cnt++;   

}
  
 if(cnt>1){
  cout<<"NO"<<endl;
 }else{
  cout<<"YES"<<endl;
 }
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
while(t--){
solve();
}
}