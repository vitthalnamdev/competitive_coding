#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;
       int arr[n];
       int brr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
       for(int i=0;i<n;i++)cin>>brr[i];
       int p1=0,p2=0;
       int ans=0;
       while(p2<n){
        if(arr[p1]>brr[p2]){
            ans++;p2++;
        }else p1++,p2++;
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