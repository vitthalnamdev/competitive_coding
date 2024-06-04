#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;
       string s;cin>>s;
       
        
         int count=0;
          for(int i=0;i<n;i++){
             count+=(s[i]-'0');
          }
          if(count==2){
             for(int i=0;i<n-1;i++){
                if(s[i]=='1' && s[i+1]=='1')
                {
                    cout<<"NO"<<endl;return;
                }
             }
          }
          if(count%2==1){
            cout<<"NO"<<endl;
          }else{
            cout<<"YES"<<endl;
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