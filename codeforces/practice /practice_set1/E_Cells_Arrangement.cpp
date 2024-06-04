#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;
     if(n==2){
        cout<<2<<" "<<1<<endl;
        cout<<1<<" "<<2<<endl;
     }else if(n==3){
        cout<<1<<" "<<3<<endl;
        cout<<2<<" "<<3<<endl;
        cout<<2<<" "<<1<<endl;
     }else{
        vector<pair<int,int>>ans;
        cout<<1<<" "<<n<<endl;
        cout<<n<<" "<<1<<endl;
        cout<<2<<" "<<1<<endl;
        for(int i=3;i<n;i++){
            ans.push_back({1,i});
        }
        for(int i=0;i<ans.size();i++)cout<<ans[i].first<<" "<<ans[i].second<<endl;
     }

 cout<<endl;


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