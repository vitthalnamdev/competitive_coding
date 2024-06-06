#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
 
void solve(){
  int n;cin>>n;
  int cnt1=0;
  int arr[n];
  for(int i=0;i<n;i++)cin>>arr[i];
  
  int pref[n];
  for(int i=0;i<n-1;i++){
     pref[i]=gcd(arr[i],arr[i+1]);
  }
  pref[n-1]=INT_MAX;
  
  int suffcheck[n],prefcheck[n];
  suffcheck[n-1]=1;
  for(int i=n-2;i>=1;i--){
      suffcheck[i]=(suffcheck[i+1]&(pref[i]<=pref[i+1]));
  }
  prefcheck[0]=1;
  for(int i=1;i<=n-2;i++){
    prefcheck[i]=(prefcheck[i-1]&(pref[i]>=pref[i-1]));
  }
  
  bool f=0;
  for(int i=0;i<n;i++){
    bool above = (i+1<n?suffcheck[i+1]:1);
    bool below = (i-2>=0?prefcheck[i-2]:1);
    if(i+1>=n || i-1<0){
       f|= ( above & below);continue;
    }
    int now = gcd(arr[i-1],arr[i+1]);
    
    int prevgcd = (i-2>=0?pref[i-2]:INT_MIN);
    int abovegcd = (i+1<n?pref[i+1]:INT_MAX);
    bool ok = prevgcd<=now && now<=abovegcd;
    f|=(above & below & ok); 
    
  }
  if(f){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
while(t--){
solve();
}
}