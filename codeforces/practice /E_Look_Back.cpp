#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       ll n;cin>>n;
      double arr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
     long long  ans=0;
     long long mx=0;
      for(int i=0;i<n-1;i++){
        int temp = ceil(log2(arr[i]/arr[i+1]));
        mx+=temp;
       
        if(mx<0){
            mx  = 0 ;continue;
        }
        ans+=mx;
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