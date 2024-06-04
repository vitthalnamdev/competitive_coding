#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
     multiset<int>s;
     int n;cin>>n;
     for(int i=0;i<n;i++)  
     {
       int x;cin>>x;    
       auto it=s.lower_bound(x);
       if(it!=s.end()){
        s.erase(it);
       }
       s.insert(x);
     }cout<<s.size();
} 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;tc=1;
    while(tc--)
    {
        solve();
    }
}