#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;
       if(n%2==1){
        cout<<"NO"<<endl;return;
       }
       cout<<"YES"<<endl;
        for(int i=1;i<=n;i+=2){
            if(i%4==1)
            cout<<"AA";
            else
            cout<<"BB";
        }


  cout<<endl;

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