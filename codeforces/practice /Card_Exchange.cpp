#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n,k;cin>>n>>k;
       int arr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
       int count[101];
       for(int i=0;i<=100;i++){
           count[i]=0;
       }
       for(int i=0;i<n;i++){
          count[arr[i]]++;
       }
     for(int i=0;i<=100;i++){
        if(count[i]>=k){
            cout<<k-1<<endl;return;
        }
     }
     cout<<n<<endl;



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