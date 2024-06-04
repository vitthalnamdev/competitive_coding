#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;
       string s;cin>>s;
       int cnt=0;char prev=s[0]; 
       vector<int>ans;int odd=0;char back='-1';
       int x=0;
       for(int i=0;i<n;i++){
        if(s[i]==prev)cnt++;
        else{
            if(cnt%2==1){
             if(back!=s[i]){  
             ans.push_back(i+1);
             back=s[i];
             }else{
              ans.push_back(i);
              back=s[i-1];
             }
             if(s[i]=='1')prev='0';
             else prev='1';
             cnt=0;
            }else{
                cnt=1;
                prev=s[i];
            }
        }
       }
      if(cnt%2)odd++;
      if(odd%2){
        cout<<-1<<endl;return;
      }
      
      cout<<ans.size()<<endl;
      for(int i=0;i<ans.size();i++)
      cout<<ans[i]<<" ";cout<<endl;

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