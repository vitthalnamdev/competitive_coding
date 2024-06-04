#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int ans=1;
    for(int i=2;i<=n;i++){
      int cnt = i;
       queue<int>q;
      for(int j=0;j<n;j++){
            
            int now = q.size();
            if(now%2==0 && s[j]=='0'){
           
               
                q.push(i+j-1);
            }
            if(now%2==1 && s[j]=='1'){
                q.push(i+j-1); 
            }
            if(q.size()>0 && j==q.front()){
               q.pop();
            }
        }
        if(q.size()==0){ans=i;}
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