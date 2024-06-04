#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
const int N=100005;
int tree[4*N+1];
int tree2[4*N+1];
int arr[N];
int construct(int start,int end,int ind){
    if(start==end){
        return tree[ind]=arr[start];
    }
    int mid=(start+end)/2;
    int left=construct(start,mid,2*ind+1);
    int right=construct(mid+1,end,2*ind+2);
    tree[ind]=max(left,right);
    return tree[ind];
}
int construct2(int start,int end,int ind){
    if(start==end){
        return tree2[ind]=arr[start];
    }
    int mid=(start+end)/2;
    int left=construct2(start,mid,2*ind+1);
    int right=construct2(mid+1,end,2*ind+2);
    tree2[ind]=min(left,right);
    return tree2[ind];
}
int query_max(int start,int end,int ind,int l,int r)
{
   if(end<l || start>r){return INT_MIN;}
   if(start>=l && end<=r){return tree[ind];}
   int mid=(start+end)/2;
   int left=query_max(start,mid,2*ind+1,l,r);
   int right=query_max(mid+1,end,2*ind+2,l,r);
   return max(left,right);
}
int query_min(int start,int end,int ind,int l,int r)
{
   if(end<l || start>r){return INT_MAX;}
   if(start>=l && end<=r){return tree2[ind];}
   int mid=(start+end)/2;
   int left=query_min(start,mid,2*ind+1,l,r);
   int right=query_min(mid+1,end,2*ind+2,l,r);
   return min(left,right);
}
 void solve(){
       int n;cin>>n;
       for(int i=0;i<n;i++)cin>>arr[i];
        construct(0,n-1,0);
        construct2(0,n-1,0);
     ll ans=0;
     int p1=0;int p2=0;
     ll cnt=1;
     while(p2<n){
        int mx=query_max(0,n-1,0,p1,p2);
        int mn=query_min(0,n-1,0,p1,p2);
        if(mx-mn<=2){
           cnt++;
           p2++;
        }else{
          ans+=(cnt);
          cnt=p2-p1;
          p1++;
        }
     }
   cout<<ans<<endl;



return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
// cin>>t;
t=1;
while(t--)
solve();
return 0;
}