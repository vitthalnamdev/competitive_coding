#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
  int prev = -1;
  string s,a;cin>>s>>a;
  map<char,int>check;
  bool f=0;
  int n= s.length();int id = a.length();
  int p1 = id; 
  for(int i=n-1;i>=0;i--){
    
     if(s[i]==a[p1-1] && !check[s[i]]){
        p1--; 
     }else {
        check[s[i]]=1;
     }
     if(p1==0){
      f = 1;break;
     }
     
  }
  if(f)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t=1;cin>>t;
while(t--){
solve();
}
}