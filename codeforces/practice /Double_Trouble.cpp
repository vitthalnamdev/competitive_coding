#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;cin>>t;
     while(t--){
         int n;cin>>n;
         vector<pair<int,int>>arr(n);
         for(int i=0;i<n;i++){
             cin>>arr[i].first;
         }
         for(int i=0;i<n;i++){
             cin>>arr[i].second;
         }
         int cnt = 0;
         bool left=1,right = 1;
         for(int i=1;i<n;i++){
             if(cnt>=2){
                 break;
             }
             if(arr[i-1].second+arr[i-1].first<arr[i].first){
                 right = 0;
             }
             if(arr[i].first-arr[i].second>arr[i-1].first){
                 left=0;
             }
             if(right == 0 && left==0){
                right=1;left=1;
                 cnt++; 
                 if(cnt==2 && i<n-1){
                     cnt++;
                 }
             }
         }
        
         if(cnt>=2){
             cout<<"NO"<<endl;
         }else{
             cout<<"YES"<<endl;
         }
     }

}
