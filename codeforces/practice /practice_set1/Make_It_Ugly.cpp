#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
       int ans=INT_MAX; 
       bool f=0;
       int i=1;
       set<int>s;int prev=-1;
       for(int i=0;i<n;i++){
         s.insert(arr[i]);
         if(s.size()>1){
            ans=min(ans,i-prev-1);prev=i;s.clear();
         }
       }
       if(ans==INT_MAX){cout<<-1<<endl;return;}
       ans=min(ans,n-prev-1);
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