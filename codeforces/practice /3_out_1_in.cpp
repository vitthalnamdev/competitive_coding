#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    int n,q;cin>>n>>q;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    ll prefix[n];
    multiset<ll,greater<ll>>b;ll ans=0;
    multiset<ll>a;
    for(int i=0;i<n;i++){
       if(a.size()>0 && *a.begin()<arr[i]){
        a.insert(arr[i]);ans+=(arr[i]);
       }else{
        b.insert(arr[i]);ans-=arr[i];
       }
       if(i%2==0){
       if(a.size()>b.size())
       {
         while(a.size()-1>b.size())
         {
            ll ele=*a.begin();
            ans-=2*(ele);a.erase(a.find(ele));
            b.insert(ele);            
         }
       }else{
         while(b.size()>=a.size()){
            ll ele=*b.begin();
            ans+=2*(ele);b.erase(b.find(ele));
            a.insert(ele); 
         }
       }
        prefix[i]=ans;
       }
         
    }
    while(q--)
    {
       ll x;cin>>x;x--;
       cout<<prefix[x]<<" "; 
    }cout<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
while(t--){
solve();
}
}