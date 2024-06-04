#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
bool cmp(pair<int,int>a,pair<int,int>b)
{
   return a.second<b.second;
}
 void solve(){
       int n,m;cin>>n>>m;
       vector<pair<int,int>>arr(n);
       for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
       }
      sort(arr.begin(),arr.end());
      int c=0;int ans=0;set<int>check;
      map<int,int>count;
      for(int i=0;i<n;i++){
        if(arr[i].first==1)continue;
        while(check.size()>0 && *check.begin()<=arr[i].first)
        {
          c-=count[*check.begin()];
          check.erase(check.begin());
        }
        c++;
        count[arr[i].second+1]++;
        check.insert(arr[i].second+1);
        ans=max(ans,c);
      }
      count.clear();c=0;check.clear();
      sort(arr.begin(),arr.end(),cmp);
      for(int i=n-1;i>=0;i--)
      {
        if(arr[i].second==m){continue;} 
        while(check.size()>0 && *check.rbegin()>=arr[i].second){
           c-=count[*check.rbegin()];
           check.erase(--check.end());
        }
        c++;
        count[arr[i].first-1]++;
        check.insert(arr[i].first-1);
        ans=max(ans,c);
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