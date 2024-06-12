#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
  int n;cin>>n;
  int arr[n];
  int pos;
  for(int i=0;i<n;i++){cin>>arr[i];if(arr[i]==n)pos=i;}
  pos%=2;
  vector<pair<int,int>>check,check2;
  for(int i=pos;i<n;i+=2){
      check.push_back({arr[i],i});
  }
  for(int i=pos^1;i<n;i+=2){
    check2.push_back({arr[i],i});
  }
  sort(check.begin(),check.end());
  sort(check2.begin(),check2.end());
  int num = n;
  vector<int>ans(n);
  for(int i=0;i<check.size();i++){
    ans[check[i].second]=num--;
  }
  num = n/2;
  for(int i=0;i<check2.size();i++){
     ans[check2[i].second]=num--;    
  }
  for(int i=0;i<n;i++)cout<<ans[i]<<" ";cout<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
while(t--){
solve();
}
}