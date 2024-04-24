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
        count[(arr[i])]=1;
      }
      int ans=0;
      for(int i=0;i<x;i++){
         int diff=0;
         if(i+1<x)diff=(arr[(i+1)]-arr[i]);
         else diff=n+arr[0]-arr[i];
         diff=max(diff-1,0);
         int prev=diff;
         diff=min(diff/2,y);
         y-=diff;
         if(prev%2)ans+=(2*diff+1);
       }   
       for(int i=0;i<x;i++){
         int diff=0;
         if(i+1<x)(diff=arr[(i+1)]-arr[i]);
         else diff=n+arr[0]-arr[i];
         diff=max(diff-1,0);
         int prev=diff;
         diff=min(diff/2,y);
         y-=diff;
          
         if(prev%2==0)ans+=(2*diff);
      }

      cout<<ans+x-2+y<<endl;
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