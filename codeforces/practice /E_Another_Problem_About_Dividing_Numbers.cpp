#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
  const int N = 32005;
bool istrue[N];
vector<int>primes;
void precal(){
//    istrue[1]=0;
    for(int i=2;i*i<=N;i++){
        for(int j=i*i;j<=N;j+=i){
            istrue[j]=1;
        }
    }
    for(int i=2;i<=N;i++){
       if(istrue[i]==0){
          primes.push_back(i);
       }
    }
}
void solve(){
  int a,b, k;cin>>a>>b>>k;
  if(k==0){
   if(a==b){cout<<"YES"<<endl;}else cout<<"NO"<<endl;
  }
  else if(k==1){
    if(a==b){
        cout<<"NO"<<endl;return;
    }
    int g = gcd(a,b);
    if(a==g || b == g){ cout<<"YES"<<endl;}
    else cout<<"NO"<<endl;
  }else{
      int counta = 0 ;int countb= 0;
      for(int i: primes){
        while(a%i==0){a/=i;counta++;}
        while(b%i==0){b/=i;countb++;}
      }
      if(a>1)counta++;
      if(b>1)countb++;
      
      if(counta+countb<k){
        cout<<"NO"<<endl;
      }else{
        cout<<"YES"<<endl;
      }
  }

}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
precal();
int t;cin>>t;
while(t--){
solve();
}
}