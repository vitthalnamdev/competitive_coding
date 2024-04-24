#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n,x,y;cin>>n>>x>>y;
       int arr[x];
      for(int i=0;i<x;i++)cin>>arr[i];
      sort(arr,arr+x);
      map<int,int>count;
      for(int i=0;i<x;i++){
        count[(arr[i])%n]=1;
      }
      int ans=0;
      for(int i=0;i<x;i++){
         if(count[(arr[i]+1)%n]==0 && count[(arr[i]+2)%n]==1){
             ans++;
         }
      }
      for(int i=1;i<x;i++){
        int diff=arr[i]-arr[i-1];
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