#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       string s;cin>>s;
       int n=s.length();
       int ans=0;
       for(int i=1;i<=n;i++)
       { int cnt=0;
        for(int j=0;j<n-i;j++){
          
          cnt+=(s[j]==s[j+i] || s[j]=='?' || s[j+i]=='?');
          if(j-i>=0){
           cnt-=(s[j]==s[j-i] || s[j]=='?' || s[j-i]=='?');
          }
          if(cnt==i){
             ans=max(ans,2*i);
          }
        }
       }
        cout<<ans<<endl;

return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
cin>>t;
// t=1;
while(t--)
solve();
return 0;
}