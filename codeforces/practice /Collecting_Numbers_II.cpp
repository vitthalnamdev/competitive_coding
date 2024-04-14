#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
bool check(int a,int b)
{
  return a>b;
}
 void solve(){
       int n,m;cin>>n>>m;
       vector<int>arr(n+1); int position[n+2];
       for(int i=0;i<=n+1;i++)position[i]=0;
       for(int i=1;i<=n;i++){
        cin>>arr[i];position[arr[i]]=i;
       }
       int ans=1;
       for(int i=2;i<=n;i++)
       {
          if(position[i]<position[i-1]){ans++;}
       }
       while(m--)
       {
         int a,b;cin>>a>>b;
         set<pair<int,int>>s;
         s.insert({position[a-1],position[a]});s.insert({position[a],position[a+1]});
         s.insert({position[b],position[b+1]});s.insert({position[b-1],position[b]});  
         for(auto i:s)
         {
            ans-=check(i.first,i.second);
         }
         swap(position[a],position[b]);
         for(auto i:s)
         {
            ans+=check(i.first,i.second);
         }
         cout<<ans<<endl;
       }
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