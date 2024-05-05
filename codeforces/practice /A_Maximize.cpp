#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;
       int ans=1;int now = 1;
      for(int i=1;i<n;i++){
        int curr=i+gcd(n,i);
        if(curr>ans){
            ans=curr;now=i;
        }         
      }

cout<<now<<endl;


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