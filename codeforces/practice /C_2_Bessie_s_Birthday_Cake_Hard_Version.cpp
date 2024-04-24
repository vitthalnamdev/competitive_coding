#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n,x,y;cin>>n>>x>>y;
       int arr[x+1];int ini=y;
      for(int i=0;i<x;i++)cin>>arr[i];
       
      sort(arr,arr+x);arr[x]=arr[0]+n;
      map<int,int>count;
      for(int i=0;i<x;i++){
        count[(arr[i])%n]=1;
      }
      int ans=x-2;
      vector<int>odd;
      int event=0;
      for(int i=1;i<=x;i++){
         int diff=arr[i]-arr[i-1]-1;
         if(diff<=1){
            ans+=diff;
         }           
         else if(diff%2)
         {
           odd.push_back(diff/2);
         }else{
           event+=(diff/2); 
         }
      }
      sort(odd.begin(),odd.end());
     
      for(auto i:odd)
      {
         if(y>=i){
            ans+=(i+1);y-=i;
         }else{
           ans+=(y);y=0;break;
         }
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