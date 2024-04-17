#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
       bool f=1;
       int mn=arr[0];
       if(arr[0]!=arr[n-1]){cout<<"NO"<<endl;return;}
       for(int i=1;i<n-1;i++){
           if(arr[i]<mn){
             cout<<"NO"<<endl;return;
           }
       }
      cout<<"YES"<<endl;    




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