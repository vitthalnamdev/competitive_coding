#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
ll dp[200005];
int m = 1e9+7;
ll inv(int a) {
  return a <= 1 ? a : m - (long long)(m/a) * inv(m % a) % m;
}
int mod=1e9+7;
 void solve(){
       int n;cin>>n;
       int sum = (n*(n+1))/2;
        if(sum%2){
            cout<<0<<endl;return;
        }else{
            sum=sum/2;
        }
        dp[0]=1;
       for(int i=1;i<=n;i++){
          for(int j=sum;j>=i;j--){
            dp[j]+=dp[j-i];
            dp[j]%=mod;
          }
       }
       ll number = inv(2);
       cout<<dp[sum]*number%mod<<endl;
return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
// cin>>t;
t=1;
while(t--)
solve();
return 0;
}