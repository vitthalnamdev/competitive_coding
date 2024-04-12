#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       string s;cin>>s;
       int n=s.length();
       int ans=0;
       
       for(int i=0;i<n;i++){
          string temp="";
         for(int j=i;j<n;j++){
           temp+=s[j];
        //    int currlength=temp.length();
        //    string now = s.substr(j+1,currlength);
        //    if(now.length()!=temp.length()){continue;}
        //    int p1=0;bool f=1;
        //     int ok=now.length();
        //    while(p1<ok){
        //      if(temp[p1]!=now[p1] && temp[p1]!='?' && now[p1]!='?'){
        //        f=0;break;
        //      }p1++;
        //    }
        //    if(f){
        //     ans=max(ans,2*ok);
        //    }
             
          }
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