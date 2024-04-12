#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
ll counT[1000001];
 void solve(){
   ll n;cin>>n;
   ll arr[n];
   for(int i=0;i<n;i++)cin>>arr[i]; 
  //   sort(arr,arr+n);
  // map<ll,ll>counT;
   for(int i=0;i<n;i++){
     counT[arr[i]]++;
   }  
   ll ans=0;
   for(int i=0;i<n;i++){    
     ans+=((counT[arr[i]]-1)*(counT[arr[i]]-2));
     for(int j=1;j<=sqrt(arr[i]);j++){
         if(arr[i]%j==0){
            if((arr[i]/j )!= (arr[i]*(j)) && arr[i]*j<=1000000){
               ans+=(counT[arr[i]/j]*counT[arr[i]*(j)]);
            }
           int num=arr[i]/j;
            if(num==j){continue;}
           if(arr[i]/num != arr[i]*num)
          {
          if(arr[i]*num<=1000000)      
            ans+=(counT[arr[i]/num]*counT[arr[i]*(num)]);
          } 
         }  
     }
   } 
   cout<<ans<<endl;
   for(int i=0;i<n;i++){
    counT[arr[i]]--;
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