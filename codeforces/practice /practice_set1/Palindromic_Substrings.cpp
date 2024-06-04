#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;string s;cin>>s;
       if(n%2){
        if(n==1){
            cout<<"Bob"<<endl;return;
        }
        int arr[2]={0,0};
        for(int i=0;i<n;++i){
          if(s[i]=='0'){arr[0]++;}
          else arr[1]++;
        }
         sort(arr,arr+2);
         if(arr[0]==arr[1]-1){
            cout<<"Alice"<<endl;
         }else{
            cout<<"Bob"<<endl;
         }
       }else{
         int cnt=0;
         for(int i=0;i<n;i++){
            if(s[i]=='0'){cnt++;}
         }
         if(cnt*2==n){cout<<"Bob"<<endl;}
         else{
            cout<<"Alice"<<endl;
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