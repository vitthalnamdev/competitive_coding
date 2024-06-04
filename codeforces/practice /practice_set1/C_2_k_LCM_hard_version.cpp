#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
vector<int>find(int n)
{   
    if(n%2==1){
        return {1,(n-1)/2,(n-1)/2};
    }else if(n%4==0){
        return {n/2,n/4,n/4};
    }
    else{
        return {n/2-1,n/2-1,2};
    }
}
 void solve(){
       int n,k;cin>>n>>k;
       vector<int>ans=find(n-k+3);
   for(int i=0;i<k;i++){
     if(i<3)cout<<ans[i]<<" ";
     else cout<<1<<" ";
   }cout<<endl;

return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
cin>>t;
// t=1;
while(t--)
solve();
return 0;
}