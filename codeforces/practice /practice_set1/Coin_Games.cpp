#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;
       string s;cin>>s;
       int ans=0;
       for(int i=0;i<n;i++){
        int cnt=0;
         while(i<n && s[i]=='U'){cnt++;i++;}
         if(cnt%2==0)ans+=2;
         else ans++;
       }
      if(ans%2==0){
        cout<<"NO"<<endl;
      }else cout<<"YES"<<endl;




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