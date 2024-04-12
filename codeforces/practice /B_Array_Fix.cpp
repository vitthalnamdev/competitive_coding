#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;
       int arr[n];
       for(int i=0;i<n;i++){
        cin>>arr[i];
       }
       bool f=1;
        for(int i=1;i<n;i++){
           if(arr[i]<arr[i-1]){
             int last=0;
             for(int j=0;j<i;j++){
                int rem=arr[j]%10;int num=arr[j]/10;
                int rem2=num%10;
                if(rem2>0 && rem2>=last  && rem>=rem2){
                    last=rem;
                }else if(rem2==0 && rem>=last){
                       last=rem;
                }else{
                     
                    f=0;break;
                }
             }
             if(arr[i]<last){
                
                f=0;break;
             }
             if(f==0)break;
           }
        }
       if(f){
        cout<<"YES"<<endl;
       }else{
        cout<<"NO"<<endl;
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