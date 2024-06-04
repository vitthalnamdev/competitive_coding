#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
int vis[100005];
int factor[100005];
int safe[100005];
void sieve(){
    for(int i=1;i<=100000;i++)factor[i]=i;
    for(int i=2;i*i<=100000;i++){
        for(int j=i*i;j<=100000;j+=i)
        {
            if(factor[j]==j){
                factor[j]=i;
            }
        }
    }
}
void solve(){
 int n,m;cin>>n>>m;
 for(int i=1;i<=m;i++){
 char sign;cin>>sign;int x;cin>>x;
 if(sign=='+')
 {
    if(safe[x]==1){
        cout<<"Already on"<<endl;
    }else{
        // map<int,int>count;
        int temp=x;bool f=1;
        while(temp>1){
           int y=factor[temp];
           if(vis[y]>0){f=0;break;}
           temp/=y;
        }
        if(f==0){
         cout<<"Conflict with "<<vis[factor[temp]]<<endl;
        }
        else{ 
        cout<<"Success"<<endl;
        safe[x]=1;
        int temp=x;
          while(x>1){
           int y= factor[x];
           vis[y]=temp;
            x/=y;
          }
        }
    }
 }else{
   if(safe[x]==0){
      cout<<"Already off"<<endl;
   }else{
      cout<<"Success"<<endl;
      safe[x]=0;
      while(x>1){
        int y= factor[x];
        vis[y]=0;
        x/=y;
      }
   }
 }
 }
return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
sieve();
// cin>>t;
t=1;
while(t--)
solve();
return 0;
}