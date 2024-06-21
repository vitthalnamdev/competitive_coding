#include<bits/stdc++.h>
using namespace std;
#define ll long long 
class node{
    public:
    int parent=0, child=0;
};
void solve(){
  int n;cin>>n;
  int arr[n+1];
  for(int i=1;i<=n;i++){
    cin>>arr[i];
  }
  node family[n+1];
  for(int i=1;i<=n;i++){
     if(family[arr[i]].child==0 && arr[i]!=i){
        family[arr[i]].child = i;
        family[i].parent = arr[i];
     }
  }vector<vector<int>>ans;
  for(int i=1;i<=n;i++){
     vector<int>temp;
     int curr = i;
     if(family[i].parent==0){
        while(family[curr].child!=0){
         temp.push_back(curr);
         curr = family[curr].child;
        }
        temp.push_back(curr);
        ans.push_back(temp);
     }
  }
  cout<<ans.size()<<endl;
  for(auto i:ans){
    cout<<i.size()<<endl;
    for(auto j:i){
        cout<<j<<" ";
    }cout<<endl;
  }cout<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
//freopen('problemname.in', 'r', stdin);
//freopen('problemname.out', 'w', stdout);
int t;cin>>t;
while(t--){
solve();
}
}