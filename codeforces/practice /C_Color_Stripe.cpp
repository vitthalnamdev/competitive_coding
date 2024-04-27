    #include<bits/stdc++.h>
    using namespace std;
    using ll =long long int;
    using ull=unsigned long long;

    void solve(){
      int n,k;cin>>n>>k;
      string s;cin>>s;
    //   cout<<s.length()<<endl;
      int dp[n+1][k];
      for(int i=0;i<=n;i++){for(int j=0;j<k;j++)dp[i][j]=0;}
      for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            int mn=INT_MAX;
            for(int l=0;l<k;l++){
               if(l==j)continue;
               mn=min(mn,dp[i][l]);
            }
            dp[i+1][j]=mn+(s[i]-'A'==j?0:1);
        }
      }int ans=INT_MAX;
      for(int i=0;i<k;i++){
        ans=min(ans,dp[n][i]);
      }
      cout<<ans<<endl;int prev=-1;
      for(int i=n;i>=1;i--)
      {
         int mn=INT_MAX;int ind=0;
         for(int j=0;j<k;j++){
            if(j==prev)continue;
           if(dp[i][j]<mn){
            mn=dp[i][j];ind=j;
           }
         }
         s[i-1]=ind+'A';prev=ind;
      }
      cout<<s<<endl;
    return;
    }
    int main()
    {
    std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
    int t;
    // cin>>t;
    t=1;
    while(t--)
    solve();
    return 0;
    }