#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
    int a,b,c;cin>>a>>b>>c;
    if(a+1!=c){
        cout<<-1<<endl;return;
    }
    if(a+b+c==1){
        cout<<0<<endl;return;
    }
    int prev=1;int ans=1;
    int curr=0;
    for(int i=0;i<a+b;i++){
       if(!prev){
         swap(prev,curr);ans++;
       }
       prev--;curr++;
       if(i<a){curr++;}
    }

    cout<<ans<<endl;



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