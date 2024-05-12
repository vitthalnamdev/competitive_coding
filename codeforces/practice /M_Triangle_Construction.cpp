#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];  
    sort(arr,arr+n);
    ll sum=0;
    for(int i=0;i<n;i++)sum+=arr[i];
    sum/=3;ll cnt=0;
    for(int i=0;i<n-1;i++){
      cnt+=arr[i];
    }     
    if(cnt>=sum){
        cout<<sum<<endl;
    }else{
        cout<<cnt<<endl;
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