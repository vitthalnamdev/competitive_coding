#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
int n,m,k;cin>>n>>m>>k;
vector<ll>diff(n),prob(m),func(k);
for(int i=0;i<n;i++){
    cin>>diff[i];
}
ll initial_limit;
for(int i=0;i<m;i++)cin>>prob[i];
for(int i=0;i<k;i++)cin>>func[i];
sort(diff.begin(),diff.end());
sort(prob.begin(),prob.end());
sort(func.begin(),func.end());
ll mx = 0;int cnt = 0;
for(int i=1;i<n;i++){
  if(diff[i]-diff[i-1]>mx){
    mx = diff[i]-diff[i-1];
    initial_limit=i-1;
    cnt=0;
  }else if(diff[i]-diff[i-1]==mx){
    cnt++;
  }
} 
ll ans = INT_MAX;
 if(cnt>1){
    cout<<mx<<endl; 
    return;
 }
 for(int i=0;i<m;i++){
    ll nowans=INT_MAX;
   ll curr =  diff[initial_limit]+mx / 2  - prob[i];
   int ind = lower_bound(func.begin(),func.end(),curr)-func.begin();
   int ind1 = ind-1;
   if(ind==k){ind--;}
   curr =(prob[i] + func[ind]);
  if(curr>=diff[initial_limit] && curr<=diff[initial_limit+1])
   nowans=max(curr-diff[initial_limit],diff[initial_limit+1]-curr);
   
   ll curr2=0;
   if(ind1>=0){
      curr2 = (prob[i] + func[ind1]);
        if(curr2>=diff[initial_limit] && curr2<=diff[initial_limit+1])
       nowans=min(nowans,max(curr2-diff[initial_limit],diff[initial_limit+1]-curr2));
    
   }
   ans=min(ans,nowans);
    
 }

if(ans==INT_MAX){
    ans=diff[initial_limit+1]-diff[initial_limit];
}
 for(int i=1;i<n;i++){
    if(i-1==initial_limit){
        continue;
    }
    ans=max(ans,diff[i]-diff[i-1]);
 }
 cout<<ans<<endl;

}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
while(t--){
solve();
}
}