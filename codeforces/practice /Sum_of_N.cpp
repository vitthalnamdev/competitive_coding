#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
const int maxN= 1e6;
vector<int>Prime;
int prime[maxN+1];
vector<ll>sums;
void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
     
     for(int i=1;i<=n;i++){
         prime[i]=i;
     }
 
    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == p) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p){
                if(prime[i]==i)
                prime[i] = p;

            }
        }
    }
   
    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p]==p)
            Prime.push_back(p);
}
void solve(){
ll k;cin>>k;
int ind = lower_bound(Prime.begin(),Prime.end(),prime[k])-Prime.begin();
cout<<k*sums[ind]<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
//freopen('problemname.in', 'r', stdin);
//freopen('problemname.out', 'w', stdout);
SieveOfEratosthenes(maxN);
// cout<<Prime.size()<<endl;
 
sums.resize(Prime.size()+2);
for(int i=0;i<Prime.size();i++){
    sums[i]=Prime[i]+(i-1>=0?sums[i-1]:0);
}
 
int t;cin>>t;
while(t--){
solve();
}
}