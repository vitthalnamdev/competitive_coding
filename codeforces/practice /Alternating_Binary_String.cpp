#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int ans=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]==s[i+1])ans++;
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