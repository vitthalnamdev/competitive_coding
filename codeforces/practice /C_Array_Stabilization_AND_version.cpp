#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
int n,d;cin>>n>>d;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
int ans[n];
int vis[n];
for(int i=0;i<n;i++)ans[i]=0,vis[i]=0;
for(int i=0;i<n;i++){
   if(arr[i]==0 && vis[i]==0){
     vis[i]=1;
     int j=(i+d)%n;int cnt = 1;
     while(vis[j]==0 && arr[j]){
        vis[j]=1;
        ans[j]=cnt++;
        j+=d;j%=n;
     }
   }
}
int solution =0;
for(int i=0;i<n;i++){
   if(vis[i]==0){cout<<-1<<endl;return;}
    solution=max(solution,ans[i]);
}
cout<<solution<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
while(t--){
solve();
}
}