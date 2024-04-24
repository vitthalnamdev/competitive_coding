#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n,k;cin>>n>>k;
       int arr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
       sort(arr,arr+n);
       int sum=0;
       for(int i=0;i<n;i++){
         if(i<k && 7-arr[i]>arr[i]){
           sum+=(7-arr[i]);
         }else sum+=arr[i];
       }

cout<<sum<<endl;



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