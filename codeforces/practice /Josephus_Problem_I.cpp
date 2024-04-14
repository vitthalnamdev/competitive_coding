#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
 int n;cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++){v[i]=i+1;} 
 int x=0;      
 while(v.size()>0)
 { vector<int>temp;
    for(int i=0;i<v.size();i++){
        if(x){
        cout<<v[i]<<" ";x^=1;   
        }
        else {temp.push_back(v[i]);x^=1;}
    }
    v=temp;
 }
 // cout<<v[0];
return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
 t=1;
while(t--)
solve();
return 0;
}