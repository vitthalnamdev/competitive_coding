#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;
       int ans=0;
       int cnt=0;int arr[2]={0,0};
       int also=0;
       for(int i=0;i<31;i++){
          if((n&(1<<i))==0){
          
             if(arr[0]==0){
                arr[0]=1;
                ans|=(1<<i);
             }
          }else{
               cnt++;
             if(arr[1]==0){
                arr[1]=1;
                ans|=(1<<i);
                also|=(1<<i);
             }
          }
       }
  if(cnt==1){cout<<ans<<endl;return;}
   cout<<also<<endl;



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