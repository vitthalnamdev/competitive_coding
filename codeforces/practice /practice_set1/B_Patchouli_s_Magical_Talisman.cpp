#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       ll n;cin>>n;
       ll arr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
       sort(arr,arr+n);
       ll sum=0;ll even=0;
       for(int i=0;i<n;i++){
          if(arr[i]%2==0){
            sum+=arr[i];
            even++;    
          }
       }
      if(even<n){
        cout<<even<<endl;
      }else{  
        even--;int cnt=0;
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            cnt=0;
           while(arr[i]%2==0 && arr[i]>0){
              arr[i]/=2;cnt++;
           }ans=min(cnt,ans);
        }
        cout<<even+ans<<endl;
      }

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