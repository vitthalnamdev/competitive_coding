#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool check(ll mx,ll time,ll arr[],ll m)
{
    int cnt =0 ;
    ll brr[mx];
    for(int i=0;i<mx;i++){brr[i]=arr[i];}
    for(int i=mx-1;i>=0;i--){
         brr[i]+=cnt;
         cnt++;
    }cnt=0;
    for(int i=0;i<mx;i++){
        if(brr[i]<=time){
            cnt++;
        }
    }
    return cnt==mx;
}

void solve(){
ll n,m,a,b;cin>>n>>m>>a>>b;
ll arr[m];
for(int i=0;i<m;i++)cin>>arr[i];
 sort(arr,arr+m);
 ll mx = abs(b-a-1);
 ll time;
 if(a<b){
   time = b-2;
 }else{
   time = n-b-1;
 }
  ll start = 0,end = mx;
  while(end- start > 1){
    ll mid = (end + start ) /2 ;
    if(check(mid,time,arr,m)){
        start = mid;
    }else{
        end=mid-1;
    }
  }
  if(check(end,time,arr,m)){
    cout<<end<<endl;
  }else{
    cout<<start<<endl;
  }

}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
while(t--){
solve();
}
}