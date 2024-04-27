#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;int m;cin>>m;
       vector<string>arr(n);
       for(int i=0;i<n;i++)cin>>arr[i];

       if(arr[0][0]==arr[n-1][m-1] || arr[0][m-1]==arr[n-1][0]){
        cout<<"YES"<<endl;return;
       }
       for(int i=0;i<n;i++){
         if((arr[i][0]==arr[0][m-1]  && arr[0][0]!=arr[i][0] )|| (arr[i][0]==arr[n-1][m-1]  && arr[n-1][0] !=arr[i][0])){
            cout<<"YES"<<endl;return;
         }
         if((arr[i][m-1]==arr[0][0]  && arr[0][0]!=arr[i][m-1] )|| (arr[i][m-1]==arr[n-1][0] && arr[n-1][m-1]!=arr[i][m-1])){
           cout<<"YES"<<endl;return;
         }
       }
       for(int i=0;i<m;i++){
         if(arr[n-1][i]==arr[0][0] && arr[n-1][i]!=arr[n-1][0] || (arr[n-1][i]==arr[0][m-1] && arr[n-1][i]!=arr[n-1][m-1]))
         {
            cout<<"YES"<<endl;return;
         }
         if((arr[0][i]==arr[n-1][0] && arr[0][i]!=arr[0][0]) || (arr[0][i]==arr[n-1][m-1] && arr[0][i]!=arr[0][m-1]))
         {
            cout<<"YES"<<endl;return;
         }
       }

    cout<<"NO"<<endl;


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