#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
vector<int>prime;
int N = 100005;
bool isprime[100005];
void SieveOfEratosthenes()
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    
    memset(isprime, true, sizeof(isprime));
 
    for (int p = 2; p * p <= N; p++) {
        // If prime[p] is not changed, then it is a prime
        if (isprime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= N; i += p)
                isprime[i] = false;
        }
    }
 
    // Print all prime numbers
    for (int p = 2; p <= N; p++)
        if (isprime[p])
            prime.push_back(p);
}

void solve(){
    ll n;cin>>n;
    n = n-4;
     
    for(ll i:prime){
       if(n-i*i>2 && (n-i*i)!=(i*i)){
            ll x = n-i*i;
        ll now  = sqrt(x);
          if(now*now == x && isprime[now]){
               cout<<"Yes"<<endl;return;  
          }
                     
       }
    }
    cout<<"No"<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
SieveOfEratosthenes();
while(t--){
solve();
}
}