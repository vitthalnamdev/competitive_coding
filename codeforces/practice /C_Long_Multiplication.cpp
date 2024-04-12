#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       string x,y;cin>>x>>y;
       int n=x.length();bool f=1;
      for(int i=0;i<n;i++){
          if(x[i]>y[i]){
            i++;
            while(i<n){
                if(y[i]<x[i])swap(x[i],y[i]);
                i++;
            }
          }else if(x[i]<y[i]){
            i++;
             while(i<n){
                if(y[i]>x[i])swap(x[i],y[i]);
                i++;
            }
          }
      }
    cout<<x<<endl<<y<<endl;



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