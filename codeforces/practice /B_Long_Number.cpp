#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
int n;cin>>n;
ll ans = 0;
string s;cin>>s;
int arr[10];
for(int i=1;i<=9;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
 if(arr[s[i]-'0'] > s[i]-'0'){
  while(i<n && arr[s[i]-'0'] >= s[i]-'0'){
     s[i] = arr[s[i] - '0'] + '0'; i++;
  }break;
 }
}cout<<s<<endl;
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