#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;
       cin>>n;
       vector<int>start,end;
       vector<pair<int,int>>arr(n);
       for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        arr[i].first=a;arr[i].second=b;
        start.push_back(a);end.push_back(b);
       }
       sort(start.begin(),start.end());
       sort(end.begin(),end.end());
       int prefstart[n];int prefend[n];
       for(int i=0;i<n;i++)prefstart[i]=0;
       for(int i=0;i<n;i++)prefend[i]=0;
       map<int,int>keys,keye;
       for(int i=0;i<n;i++){
          keys[start[i]]=i;
          keye[end[i]]=i;
       }
      for(int i=0;i<n;i++){
        prefstart[keys[start[i]]]++;
        prefend[keye[end[i]]]++;
      }
      for(int i=1;i<n;i++){
        prefstart[i]+=prefstart[i-1];
        prefend[i]+=prefend[i-1];
      }
      for(int i=0;i<n;i++){
       int ending=prefend[keye[arr[i].second]]-(keye[arr[i].first]-1>=1?prefend[keye[arr[i].second]-1]:0);
       int starting=prefstart[keys[arr[i].first]]-(keye[arr[i].second]-1>=1?prefend[keye[arr[i].second]-1]:0);
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