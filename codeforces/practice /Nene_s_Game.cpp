#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n,q;cin>>n>>q;
       int arr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
       sort(arr,arr+n);
       while(q--)
       {
       int x;cin>>x;
        cout<<min(x,arr[0]-1)<<" "; 
       }

         cout<<endl;



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