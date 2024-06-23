#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
int n;cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
map<int,int>count;
for(int i=0;i<n;i++){ 
    if(arr[i]!=1){
        count[arr[i]]++;
    }
}
if(count.size()>=2){
    if(count.size()==2){
        bool f= 0;
       for(auto i:count){
         if(i.second>1){    
             f=1;break;
         }
       }
       if(f){
        cout<<"Yes"<<endl;
       }else{
        cout<<"No"<<endl;   
       }
    }else{
        cout<<"Yes"<<endl;
    }
}else{
    cout<<"No"<<endl;
}
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