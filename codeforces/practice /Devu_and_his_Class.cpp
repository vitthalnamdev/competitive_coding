#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int type;cin>>type;
       string s;cin>>s;
       int n=s.length();
       set<int>g,b;
       for(int i=0;i<n;i++){
          if(s[i]=='G'){
            g.insert(i);
          }else{
            b.insert(i);
          }
       }
       int gsize=g.size();int bsize=b.size();
       if(abs(gsize-bsize)>1){
           cout<<-1<<endl;return;
       }
       if(abs(gsize-bsize)==1){
          if(n%2==0){
            cout<<-1<<endl;return;
          }
       }
       int ans=0;
    if(b.size()>=g.size()){
       for(int i=0;i<n;i++){
          if(i%2==0 && s[i]=='G'){
            int next = *b.begin();
            ans+=(pow(next-i,type));
            swap(s[i],s[next]);
            g.insert(next);
          }else if(i%2==1 && s[i]=='B'){
            int next = *g.begin();
            ans+=(pow(next-i,type));
            swap(s[i],s[next]);
            b.insert(next);
          }
          if(*b.begin()>=i){
             b.erase(b.begin());
          }
          if(*g.begin()>=i){
             g.erase(g.begin());
          }
       }
    }else{
         for(int i=0;i<n;i++){
          if(i%2==1 && s[i]=='G'){
            int next = *b.begin();
            ans+=(pow(next-i,type));
            swap(s[i],s[next]);
            g.insert(next);
          }else if(i%2==0 && s[i]=='B'){
            int next = *g.begin();
            ans+=(pow(next-i,type));
            swap(s[i],s[next]);
            b.insert(next);
          }
          if(*b.begin()>=i){
             b.erase(b.begin());
          }
          if(*g.begin()>=i){
             g.erase(g.begin());
          }
       }
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