#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;
       vector<int>arr;
       arr.push_back(0);
       map<int,int>count;
       for(int i=0;i<n;i++){
        int x;cin>>x;
          arr.push_back(x);
       }
        sort(arr.begin(),arr.end());
        n=arr.size();
       vector<int>dp(n+1,0);
       dp[n]=dp[n-1]=1;
       for(int i=n-2;i>=1;i--){
          int ele=arr[i]-arr[i-1];
          if(ele==1){
            dp[i]=dp[i+1]^1;
          }else{
            dp[i]=1;
          }
       }
       if(dp[1]==1){
        cout<<"Alice"<<endl;
       }else cout<<"Bob"<<endl;

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