#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
bool check(ll ele,ll arr[],ll n,ll k)
{
    for(int i=0;i<n;i++){
        if(ele>arr[i]){
           k-=(ele-arr[i]);
           if(k<0){return false;}
        }
    }
    return true;
}
 void solve(){
       ll n,k;cin>>n>>k;
       ll arr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
       ll start=0,end=1e18;
       while(end-start>1)
       {
         ll mid = start + (end-start)/2;
         if(check(mid,arr,n,k)){
            start=mid;
         }else {
            end= mid-1;
         }
       }
         ll ok;
       if(check(end,arr,n,k)){
          ok=end;
       }else{
          ok=start;
       } 
       for(int i=0;i<n;i++){
        if(arr[i]<ok)
        k-=(ok-arr[i]);
       }
       int two=0,one =0;
        ll ans= n*ok-n+1;
        for(int i=0;i<n;i++){
            if(arr[i]-ok>=2){
                two++;
            }else if(arr[i]-ok==1){
                one++;  
            }
        } 
        one+=k;
       
      cout<<ans+two+one<<endl;
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