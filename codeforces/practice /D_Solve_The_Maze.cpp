#include<bits/stdc++.h>
using namespace std;
  #define ll long long 

bool istrue(int i, int j, int n, int m){
    return i>=0 && j>=0 && i<n && j<m;
}

void dfs(int i,int j, int n,int m,vector<vector<bool>>&vis,vector<string>&arr){
   vis[i][j]=1;
   vector<int>dir={-1,1};
   for(int k:dir){
    if(istrue(i+k,j,n,m) && !vis[i+k][j] && arr[i+k][j]!='#'){
          dfs(i+k,j,n,m,vis,arr);
    }
    if(istrue(i,j+k,n,m) && !vis[i][j+k] && arr[i][j+k]!='#'){
          dfs(i,j+k,n,m,vis,arr);
    }
   }
}
void solve(){
int n,m;cin>>n>>m;
vector<string>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
bool f= 1;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
         
        if(arr[i][j]=='B'){
           vector<int>dir={-1,1};
           for(int k:dir){

             if(istrue(i+k,j,n,m)){
                 if(arr[i+k][j]=='G'){
                    f=0;break;
                 }else if(arr[i+k][j]=='.'){
                    arr[i+k][j]='#';
                 }
             }
              
             if(istrue(i,j+k,n,m)){
                 
                 if(arr[i][j+k]=='G'){
                    f=0;break;
                 }else if(arr[i][j+k]=='.'){
                    arr[i][j+k]='#';
                 }
             }
           }
        }
        if(f==0){
            break;
        }
    }
  }  
    if(f==0){
        cout<<"No"<<endl;return;
    } 
   
    vector<vector<bool>>vis(n+1,vector<bool>(m+1,0));
     if(arr[n-1][m-1]=='.'){
        dfs(n-1,m-1,n,m,vis,arr);
     }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]=='G' && vis[i][j]==0){
                f=0;break;
            }
        }
        if(f==0)break;
    }
    if(f){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
while(t--){
solve();
}
}