#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n,m;cin>>n>>m;
       string a,b;cin>>a>>b;
        int p2=0;
        int i=0;
       for(i=0;i<n;i++){
        
         while(p2<m && b[p2]!=a[i])p2++;
          if(p2>=m){break;}
          p2++;
       }


      cout<<i<<endl;


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