#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;
       int arr[n-1];
       for(int i=0;i<n-1;i++)cin>>arr[i];
       int prev=520;
       cout<<prev<<" ";
       n=n-1;
       for(int i=0;i<n;i++){
        prev+=arr[i];
         cout<<prev<<" ";
       }cout<<endl;


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