#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n,k;cin>>n>>k;
       string s;cin>>s;
       int arr[26];
       for(int i=0;i<26;i++)arr[i]=0;
       for(int i=0;i<k;i++){
          char a;cin>>a;
          arr[a-'a']++;
       }
     ll ans=0;ll x=0;
      for(int i=0;i<n;i++){
        x++;
        if(arr[s[i]-'a']==0)x=0;
        ans+=x;
      }
cout<<ans<<endl;


return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
//cin>>t;
 t=1;
while(t--)
solve();
return 0;
}