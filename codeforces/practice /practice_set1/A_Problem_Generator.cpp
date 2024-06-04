#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
int n,m;cin>>n>>m;
string s;cin>>s;
vector<int>arr(26,0);
for(int i=0;i<n;i++){
    arr[s[i]-'A']++;
}
int ans=0;
for(int i=0;i<7;i++){
 if(arr[i]<m){
    ans+=(m-arr[i]);
 }
}cout<<ans<<endl;

}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
while(t--){
solve();
}
}