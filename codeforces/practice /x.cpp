#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       ll n;cin>>n;
       vector<vector<int>>ans1(n+1,vector<int>(n+1,0));
       vector<vector<int>>ans;
       vector<vector<int>>check(2,vector<int>(n+1,0));
       ll sum=0;
       int x=0;
       int count=0;
       while(count<2*n){
       for(int i=1;i<=n;i++){
        if(check[x][i]<(n*(n+1))/2){
         vector<int>temp;count++;
         int c;
         if(x==0){c=1;}else c=2;
         temp.push_back(c);
         temp.push_back(i);
         for(int j=1;j<=n;j++){
            temp.push_back(j); 
            if(x==0){
               check[1][j]-=ans1[i][j]; 
               ans1[i][j]=j;check[1][j]+=ans1[i][j]; 
            }else{
              check[0][j]-=ans1[j][i];
              ans1[j][i]=j;check[0][j]+=ans1[j][i];
            }
         }check[x][i]=(n*(n+1))/2;
           ans.push_back(temp);
         }else{
            if(i==1)count++;
           x^=1;break;  
         }
       } 
       }
       
       for(int i=1;i<=n;i++){sum+=check[1][i];}
     cout<<sum<<" "<<ans.size()<<endl;
     
     for(int i=0;i<ans.size();i++)
     {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }cout<<endl;
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