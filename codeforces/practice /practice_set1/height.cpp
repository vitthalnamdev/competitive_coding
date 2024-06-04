#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
       int p1=0,p2=n-1;
       ll ans=0;
       while(p2>p1){
         ll curr=min(arr[p2],arr[p1]);
         curr*=(p2-p1);
         ans=max(ans,curr);
         if(arr[p2]>arr[p1]){
            p1++;
         }else{
            p2--;
         }
       }

cout<<ans<<endl;



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