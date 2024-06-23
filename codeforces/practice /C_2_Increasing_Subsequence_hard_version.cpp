#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
int n;cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int pref[n];
int suff[n];int cnt = 1;
suff[0] = 1;
for(int i=1;i<n;i++){
  cnt++;
  if(arr[i]>=arr[i-1]){
    cnt = 1;
  }
  suff[i] = cnt;
}
pref[n-1] = 1;cnt = 1;
for(int i=n-2;i>=0;i--){
  cnt++;
  if(arr[i]>=arr[i+1]){
    cnt = 1;
  }
  pref[i] = cnt;
}
 
int p1 = 0, p2 = n-1;
int prev = 0;string ans = "";
while(p2>=p1){
 
vector<pair<int,int>>check = {{arr[p2], 1}, {arr[p1], 0} };
sort(check.begin(),check.end());
if(check[0].first==check[1].first && check[1].first > prev){
    
    if(suff[p2]>pref[p1]){
        
        int num = min(p2-p1+1,suff[p2]);
        while(num>0){
            ans+='R';num--;
        }
    }else{
        int num = min(p2-p1+1,pref[p1]);
        while(num>0){
            ans+='L';num--;
        }
    }break;
}
if(check[0].first>prev){
  prev = check[0].first;
  if(check[0].second==0){
    p1++;ans+='L';
  }else{
    p2--;ans+='R';
  }
}else if(check[1].first>prev){
  prev = check[1].first;
  if(check[1].second==0){
    p1++;ans+='L';
  }else{
    p2--;ans+='R';
  }
}else{
    break;
}
} 
cout<<ans.size()<<endl;
cout<<ans<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
//freopen('problemname.in', 'r', stdin);
//freopen('problemname.out', 'w', stdout);
int t=1;
while(t--){
solve();
}
}