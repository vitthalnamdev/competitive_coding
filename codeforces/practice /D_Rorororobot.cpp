#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N=200005;
ll tree[4*N+1];
ll arr[N];
ll construct(int start,int end,int ind){
    if(start==end){
        return tree[ind]=arr[start];
    }
    int mid=(start+end)/2;
    int left=construct(start,mid,2*ind+1);
    int right=construct(mid+1,end,2*ind+2);
    tree[ind]=max(left,right);
    return tree[ind];
}
ll query(int start,int end,int ind,int l,int r)
{
   if(end<l || start>r){return INT_MIN;}
   if(start>=l && end<=r){return tree[ind];}
   int mid=(start+end)/2;
   int left=query(start,mid,2*ind+1,l,r);
   int right=query(mid+1,end,2*ind+2,l,r);
   return max(left,right);
}
void solve(){
  ll n,m;cin>>n>>m;
  for(int i=1;i<=m;i++)cin>>arr[i];
  construct(1,m,1);
  int q;cin>>q;
  while(q--)
  {
   ll stx,sty,finx,finy,k;cin>>stx>>sty>>finx>>finy>>k;

    if((abs(sty-finy))%k){
        cout<<"NO"<<endl;
        continue ;
    }
  ll mx =  query(1,m,1,min(sty,finy),max(sty,finy));
    if(stx>mx){
      if((abs(stx-finx))%k){
       cout<<"NO"<<endl;continue;
    }
      cout<<"YES"<<endl;continue;
    }      
    if(mx==n){
       
      cout<<"NO"<<endl;continue;
    }
    ll left = n-mx;
    
    ll step = mx - stx; 
    step = k-step%k ;
     
    if(step>left){
     
        cout<<"NO"<<endl;continue;
    }
    mx = mx + step;
    if((abs(mx-finx))%k){
       cout<<"NO"<<endl;continue;
    }
    cout<<"YES"<<endl;
  }
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t=1;
 
while(t--){
solve();
}
}