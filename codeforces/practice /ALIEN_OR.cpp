#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;
       int k;cin>>k;
       vector<int>pos(k,1);
       for(int i=0;i<n;i++){
          string s;cin>>s;
          int post=-1;int cnt=0;
          for(int j=0;j<k;j++){
             if(s[j]=='1'){
                post=j;cnt++;
             }
             if(cnt>1){break;}
          }
          if(cnt==1){
            pos[post]--;
          }
       }
       bool f=1;
       for(int i=0;i<k;i++){
            if(pos[i]==1){
                f=0;break;
            }
       }

      if(f){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }


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