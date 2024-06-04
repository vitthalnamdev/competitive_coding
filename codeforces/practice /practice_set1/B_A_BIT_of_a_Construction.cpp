#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;int k;cin>>n>>k;
       if(n==1){cout<<k<<endl;return;}
       int ele=0;
       bool f=0;
       for(int i=31;i>=0;i--)
       {
           if(f){ele|=(1<<i);}
           if((k)&(1<<i)){
             f=1;
           }
       }

         cout<<ele<<" "<<abs(ele-k)<<" ";
         for(int i=3;i<=n;i++)cout<<"0"<<" ";cout<<endl;



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