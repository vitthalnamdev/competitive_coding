#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
int n,m;cin>>n>>m;
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
int brr[n][m];
int pos[n*m+1];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){cin>>brr[i][j];pos[brr[i][j]]=i;}
}
  vector<int>match(m+1,-1);
  for(int i=0;i<n;i++){
    int position = pos[arr[i][0]];
    map<int,int>check;
    for(int j=0;j<m;j++){
        check[arr[i][j]]=j;
    }
      
    if(i==0){
        vector<int>vis(m,-1);
        for(int j=0;j<m;j++){
            match[j]=check[brr[position][j]];
            vis[check[brr[position][j]]]=1;
        }
        for(int j=0;j<m;j++){if(vis[j]==-1){cout<<"NO"<<endl;return;}}
    }else{
        for(int j=0;j<m;j++){
           if(match[j]!=check[brr[position][j]]){
            
            cout<<"NO"<<endl;return;
           }
        }
    }
  }
  
  cout<<"YES"<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
while(t--){
solve();
}
}