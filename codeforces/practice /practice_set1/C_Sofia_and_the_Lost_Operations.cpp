#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
int n;cin>>n;
int arr[n],brr[n];
for(int i=0;i<n;i++)cin>>arr[i];
for(int i=0;i<n;i++)cin>>brr[i];
int m;cin>>m;
int operation[m];
for(int i=0;i<m;i++){
    cin>>operation[i];
}
map<int,int>counto,countb;
for(int i=0;i<n;i++){
    countb[brr[i]]++;
}
for(int i=0;i<m;i++){
    counto[operation[i]]++;
}
for(int i=0;i<n;i++){
    if(arr[i]!=brr[i]){
        if(counto[brr[i]]>0){
            counto[brr[i]]--;
        }else{
            cout<<"NO"<<endl;return;
        }
    }
}
if(countb[operation[m-1]]==0){
 cout<<"NO"<<endl;return;
}cout<<"YES"<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
while(t--){
solve();
}
}