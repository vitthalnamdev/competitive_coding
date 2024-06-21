#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
int n;cin>>n;
 
int ans = 9;int prev = 0;
while(n>=10){
    int rem = n%10+prev;
    if(rem == 0  && prev!=0){
        n/=10;continue;
    }
    ans+=(10-rem);
    n/=10;
    prev = 1;
}
cout<<ans<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
//freopen('problemname.in', 'r', stdin);
//freopen('problemname.out', 'w', stdout);
int t=1;
while(t--){
solve();
}
}