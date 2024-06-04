#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
int prime[10000001];
void sieve(){
    for(int i=1;i<=10000000;i++){
        prime[i]=i;
    }
    for(int i=2;i*i<=(10000000);i++){
        for(int j=i*i;j<=10000000;j+=i)
        {
            if(prime[j]==j){
                prime[j]=i;
            }
        }
    }
}
vector<int> check(int v) {
	vector<int> ps;
	while (v > 1) {
		if (ps.empty() || ps.back() != prime[v])
			ps.push_back(prime[v]);
		v /= prime[v];
	}
	return ps;
}
 void solve(){
       int x,y;cin>>x>>y;
       int diff = y-x;
       if(diff==1){
        cout<<-1<<endl;return;
       }
       int ans=INT_MAX;
      for(auto i:check(diff)){
      int factor = i; 
      int rem=x%factor;
      ans=min(ans,(factor-rem)%factor);
      }
      cout<<(ans)<<endl;

return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
sieve();
cin>>t;
// t=1;
while(t--)
solve();
return 0;
}