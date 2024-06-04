#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
bool dp[100005];
 void solve(){
       int n;cin>>n;
       int arr[n];
       dp[0]=1;
       for(int i=0;i<n;i++)cin>>arr[i];
       
       vector<int>ans;
       for(int i=0;i<n;i++){
         for(int j=100000;j>=0;j--){
            if(j-arr[i]>=0 && dp[j-arr[i]]){
               dp[j]= dp[j-arr[i]];
            }
         }
       }
       for(int i=1;i<=100000;i++){
        if(dp[i]==1){
            ans.push_back(i);
        }
       }
      cout<<ans.size()<<endl;
      for(auto i:ans){
        cout<<i<<" ";
      }

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