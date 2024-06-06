#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}
void solve(){
   int n;cin>>n;
     
   int ans = n;
   for(int i=2;i*i<=n;i++){
    if(n%i==0){
     while(n%i==0){
        n/=i;
     }
     ans-=ans/i;
    }
   }
  
   if(n>1){
    ans-=ans/n;
   }
   cout<<ans<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t=1;
while(t--){
solve();
}
}