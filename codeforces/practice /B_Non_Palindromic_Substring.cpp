#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
 ll m = 1e9 + 7;
long long compute_hash(string const& s) {
    const int p = 31;
     
    long long hash_value = 0;
    long long p_pow = 1;
    for (char c : s) {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return (res%m * res %m* a)%m;
    else
        return (res%m * res%m)%m;
}

 void solve(){
      ll  n,q;cin>>n>>q;
        string s;cin>>s;
       ll prefix[n+1];
       string temp="";
       prefix[0]=0;
       for(int i=0;i<=n;i++){
            temp+=s[i];
            prefix[i+1]=compute_hash(temp);
       }
       ll suff[n+2];
       suff[n+1]=0;temp="";
       for(int i=n-1;i>=0;i--)
       {
            temp=temp+s[i];
            suff[i+1]=compute_hash(temp);
       }
       
      while(q--)
      {
          ll l,r;cin>>l>>r;
           vector<int>check(4,0);
           for(int i=0;i<4;i++){
            if(l+i<r){
              ll pre=((prefix[r]-prefix[l-1+i] + m )%m)*(binpow(31,(l-1+i)*(m-2)))%m;
              ll suf=((suff[l+i]-suff[r+1] + m)%m);
              suf=suf*(binpow(31,(n-r)*(m-2)))%m;
              suf%=m;
              check[i]|=(pre==suf);
            }
           }
           ll ans=0;
          for(int i=0;i<4;i++)cout<<check[i]<<" ";cout<<endl;
           if(r-l<4){    
             for(int i=0;i<min((ll)4,r-l);i++){
               ans+=((!check[i])*(r-l+1-i));
             }
             cout<<ans<<endl;
           }else{
            int cnt=0;
             for(int i=0;i<4;i++){
                 if(check[i]==0)cnt++;
             }
             if(cnt==2){
                  ll x=r-l+1;
               if(check[0]==0){
                  if(x%2==1){
                    
                    x = (x+1)/2;
                    x=x*x;
                    cout<<x-1<<endl; 
                  }else{
                    x=x/2;
                    cout<<(x*(x+1))<<endl;
                  }
               }else{
                    if(x%2==1){
                      x=x/2;
                    cout<<(x*(x+1))<<endl;
                  }else{
                      
                    x = (x+1)/2;
                    x=x*x;
                    cout<<x-1<<endl; 
                  }
               }
             }else{
                  int x=(r-l+1);
                ans+=((x*(x+1))/2) - 1;
                if(cnt>0){
                  ans-=x;
                }
                cout<<ans<<endl;
             }
           }
      }

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