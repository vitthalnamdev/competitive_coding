#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
ll INF = LLONG_MAX;
void solve(){
ll n, c;cin>>n>>c;
vector<ll>arr(n);
for(int i=0;i<n;i++)cin>>arr[i];
if(n==1){
    cout<<1<<endl;return;
}
sort(arr.begin()+1,arr.end());
 
vector<int>vis(n,0);
int i = 0;int ans = n;
for(i=0;i<n;i++){
    ll cost = 0;
    for(int j=0;j<n;j++){
        if(vis[j]==1){cost-=arr[j]*arr[i];continue;}
        if(j==i  ){continue;}
       cost+=(arr[j]*arr[i]);
    }
   
    
    if(cost<=c){
        if(i==0){
            ans=1;
            break;
        }
        else{
            vis[i]=1;
            ans--;
            c-=cost; 
        }
         
    }
}
cout<<ans<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
//freopen('problemname.in', 'r', stdin);
//freopen('problemname.out', 'w', stdout);
int t;cin>>t;
while(t--){
solve();
}
}