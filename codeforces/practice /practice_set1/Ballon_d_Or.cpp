#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;int arr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
       int cnt=0;
       for(int i=0;i<n;i++){
        if(arr[i]==2)cnt++;
       }
     if(cnt%8==0){
        cout<<"YES"<<endl;
     }else cout<<"NO"<<endl;



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