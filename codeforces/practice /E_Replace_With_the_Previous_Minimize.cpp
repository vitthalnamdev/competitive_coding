#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
int n, k;cin>>n>>k;
string s;cin>>s;char m = 'a';int mn =0;
map<char,char>id;
for(char i = 'a';i<='z' ;i++){
   id[i]=i;
}
for(int i=0;i<n;i++){
    
    if(s[i]-'a'>mn){
      int x = min(s[i]-(mn+'a'),k);
             
      mn=max(mn,s[i]-('a'));
      char prev = s[i];
      s[i] = id[s[i]-x];
       
      for(int j=0;j<x;j++){
        id[prev-j] = id[s[i]];
         
      }
         
      k-=x;
    }else{
       s[i]=id[s[i]];
    }
}
 
cout<<s<<endl;
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