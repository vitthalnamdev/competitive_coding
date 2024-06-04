#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
int e(char a){
    if(a=='<'){
        return -1;
    }
    return 1;
}
 void solve(){
       int n;cin>>n;
       vector<string>arr(2);
       cin>>arr[0]>>arr[1];
       int dp[n][2];
       for(int i=0;i<n;i++){
        dp[i][0]=0;dp[i][1]=0;
       }
       dp[0][0]=1;
     for(int i=0;i<n;i++){
        if(dp[i][0]==1){
           int ind=e(arr[1][i]);
           
           if(i+1<n){
           int mve=e(arr[0][i+1]); 
              dp[i+1+mve][0]=1;
           }
           dp[i+ind][1]=1;
           
        }
        if(dp[i][1]==1){
            int ind=e(arr[0][i]);
           if(i+1<n){
           int mve=e(arr[1][i+1]); 
            dp[i+1+mve][1]=1;
           }
            dp[i+ind][0]=1;
        }
        
       
     }
    
    if(dp[n-1][1]==1){
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