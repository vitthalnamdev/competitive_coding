#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
       if(arr[n-1]==1){
        cout<<"NO"<<endl;return;
       }
       int ans[n];int k=0;
        cout<<"YeS"<<endl;
        for(int i=n-1;i>=0;i--){
            if(arr[i]==0){
                ans[k++]=0;
            }else{
                int temp=k;int cnt=0;k--;
                while(i>=0 && arr[i]==1){cnt++;ans[k++]=0;i--;}
                ans[k++]=cnt;i++;
            }
        }
        for(int i=0;i<n;i++)cout<<ans[i]<<" ";
cout<<endl;
// ok my fufklsajdfkjasjd
// lkjdaklsjf
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