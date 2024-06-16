#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
int n,k;cin>>n>>k;
int mx = 0;
int count = 0;
int reach = 1;
for(int i=1;i<=n;i++){
   count++;
   if(count==reach){
    reach++;mx++;i++;count=0;
   }
}  
 if(mx>=k){
    cout<<"YES"<<endl;
 }else{
    cout<<"NO"<<endl;
 }

}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
while(t--){
solve();
}
}