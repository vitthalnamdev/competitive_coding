#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
       map<int,int>count;
       for(int i=0;i<n;i++){
        count[arr[i]]++;
       }int ans=0;
       for(auto i:count)
       {
         ans+=(i.second/3);
       }
cout<<ans<<endl;
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