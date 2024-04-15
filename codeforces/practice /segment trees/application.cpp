#include<iostream>
#include<climits>
using namespace std;
const int N=100005;
int tree[4*N+1];
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
int query(int start,int end,int ind,int l,int r)
{
   if(end<l || start>r){return INT_MIN;}
   if(start>=l && end<=r){return tree[ind];}
   int mid=(start+end)/2;
   int left=query(start,mid,2*ind+1,l,r);
   int right=query(mid+1,end,2*ind+2,l,r);
   return max(left,right);
}
int main(){
   int n;cin>>n;
  for(int i=0;i<n;i++)cin>>arr[i];
  construct(0,n-1,1);
  //cout<<tree[1]<<endl;
   int q;cin>>q;
   while(q--)
   {
    int l,r;cin>>l>>r;
    l--;r--;
    cout<<query(0,n-1,1,l,r);
   }
}