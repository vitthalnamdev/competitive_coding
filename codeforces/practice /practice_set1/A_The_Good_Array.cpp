#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.first==b.first){
        return a.second>b.second;
    }
    return a.first<b.first;
     
}
 void solve(){
       int n;cin>>n;
       vector<pair<ll,ll>>arr(n);
       for(int i=0;i<n;i++){
         cin>>arr[i].first>>arr[i].second;
       }
       sort(arr.begin(),arr.end(),cmp);
       map<int,int>check; 
    int x=0;ll ans=0;
    for(int i=0;i<n;i++){
        check[arr[i].first]++;
       
          ans+=(arr[i].second);
          x++;
          int temp=x;
          x-=check[x];
          check[temp]=0;
    
          if(x==0) 
            while(i+1<n && arr[i].first==arr[i+1].first){i++;}
    }cout<<ans<<endl;
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