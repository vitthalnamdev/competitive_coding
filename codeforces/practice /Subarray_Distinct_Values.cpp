#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;int m;cin>>m;
       ll prev=-1;set<int>s;
       int arr[n];ll ans=0; 
       for(int i=0;i<n;i++)cin>>arr[i];
       map<int,int>check;
       set<int>ind;
       for(int i=0;i<n;i++){
          if(s.find(arr[i])!=s.end())
          {
            ind.erase(ind.find(check[arr[i]]));
            ind.insert(i);check[arr[i]]=i;
          }else{
            check[arr[i]]=i;ind.insert(i);
          }
          s.insert(arr[i]);
          if(s.size()>m){
             prev=*ind.begin();s.erase(s.find(arr[prev]));
             ind.erase(ind.begin());
          }
          ans+=(i-prev);
       }

     cout<<ans<<endl;



return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
 
 t=1;
while(t--)
solve();
return 0;
}