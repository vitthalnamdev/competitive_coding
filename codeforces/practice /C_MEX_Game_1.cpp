#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
       map<int,int>cnt;
       for(int i=0;i<n;i++)cnt[arr[i]]++;
       int ans=0;bool f=0;
       for(int i=0;i<n;i++){
          if(cnt[i]==0 || (cnt[i]==1 && f)){break;}  
          if(cnt[i]==1){f=1;}
          ans=i+1;
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