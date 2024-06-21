#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
int n;cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ans= 0;bool f =1;
for(int i=1;i<n;i++){
  if(arr[i]<=arr[i-1]){
     int j = i;
     while(j>=1){
         while(arr[j]<=arr[j-1]){
            if(arr[j-1]==0){
                f=0;break;
            }
            arr[j-1]/=2;ans++;
         }
         j--;
         if(f==0){break;}
     }
     if(f==0){break;}
  }
}
if(f==0){
    cout<<-1<<endl;return;
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