#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
void get(int check[],int x){
for(int i=2;i<=500000;i++){
 while(x%i==0){check[i]++;x/=i;}
}
}
 void solve(){
       int n,x;cin>>n>>x;
       int arr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
       int check[500001];
       for(int i=0;i<=500000;i++)check[i]=0;
       get(check,x);
       int ans[500001];
       
       for(int i=0;i<=500000;i++)ans[i]=0;
       for(int i=0;i<n;i++){
          ans[arr[i]]++;
       }    
       for(int i=499999;i>=0;i--){
         ans[i]+=ans[i+1];
       }
        bool f=1;
        for(int i=2;i<=500000;i++){
            if((check[i]-ans[i])>0){  f=0;break;}
        }
        if(f)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
 
  t=1;
while(t--)
solve();
return 0;
}