#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n,k;cin>>n>>k;
       string s;cin>>s;
       int ans=0;int prev=0;
       int above=0;
       int suff[n+1];
       for(int i=0;i<=n;i++)suff[i]=0;
       for(int i=n-1;i>=0;i--){
          if(s[i]=='0'){above=0;}
          else above++;
          suff[i]=above;
       }
       for(int i=k-1;i<n;i++){
          ans=max(ans,prev+k+suff[i+1]);
          if(s[i-k+1]=='0')prev=0;
          else prev++;
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