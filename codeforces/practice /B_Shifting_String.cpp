#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
void solve(){
ll n;cin>>n;
string s;cin>>s;
string a = s;
vector<ll>arr(n+1);
ll solution = 1;
for(ll i=1;i<=n;i++)cin>>arr[i];
vector<ll>vis(n+1,0);
  for(ll i=1;i<=n;i++){
    int ini = i;
    if(vis[i]==true){continue;}
    ll cnt = 0;
    vector<pair<int,int>>index;
    while(!vis[i]){cnt++;index.push_back({i,arr[i]});vis[i]=1;i=arr[i];}
    ll temp = (solution*cnt)/(gcd(solution,cnt));
    for(ll j=1;j<=cnt;j++){
        string newstring = s;
        for(int j=0;j<index.size();j++){
           newstring[index[j].first-1]=s[index[j].second-1];
        }    
           
        
        s=newstring;
       if(newstring==a){
          temp = min(temp,(solution*j)/gcd(solution,j));
       }
    }
    solution = temp;
    i = ini;s = a;
  }
  cout<<solution<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
while(t--){
solve();
}
}