#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
int n;cin>>n;
int arr[n], brr[n];
for(int i=0;i<n;i++){cin>>arr[i];}
multiset<int>s;
for(int i=0;i<n;i++){
    int x;cin>>x;s.insert(x);
}
for(int i=0;i<n;i++){
    int num = n-arr[i];
    auto it = s.lower_bound(num);
    int check = *s.begin();
    if(it==s.end()){
       cout<<(arr[i]+check)%n<<" ";
       s.erase(s.begin());
    }else{
      if(((arr[i]+*it)%n)<((arr[i]+check)%n)){
        cout<<(*it + arr[i]) %n<<" ";
           s.erase(it);
      }else{
       cout<<(arr[i]+check)%n<<" ";
       s.erase(s.begin());
      }
    }
}

}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
//freopen('problemname.in', 'r', stdin);
//freopen('problemname.out', 'w', stdout);
int t=1;
while(t--){
solve();
}
}