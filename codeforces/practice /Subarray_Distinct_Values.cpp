#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;int m;cin>>m;
       ll prev=0;set<int>s;
       int arr[n];ll ans=0;
       
       for(int i=0;i<n;i++)cin>>arr[i];
       for(int i=0;i<n;i++){
          
          s.insert(arr[i]);
          if(s.size()>m){
             
          }
          ans+=(i-prev+1);
       }

     cout<<ans<<endl;



return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
 
 t=1;
while(t--)
solve();
return 0;
}