#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
int start=0;
int enD=0;
ll sum=LLONG_MIN;
ll pref[100005];
ll suff[100005];
ll smallestSumSubarr(ll arr[], ll n)
{
    // to store the minimum value that is ending
    // up to the current index
   // ll min_ending_here = LLONG_MAX;
     
    // to store the minimum value encountered so far
 //   ll min_so_far = LLONG_MAX;
    
     ll sum=LLONG_MIN;
    // traverse the array elements
    for (int i=0; i<n; i++)
    {
        if(arr[i]>0){continue;}
        ll prefsum=pref[i+1];
        ll curr=0;
        int j=i;
        while(i<n && curr+arr[i]<0){
          curr+=arr[i];i++;
        }   
        if(i-j>1)
        sum=max(sum,prefsum+abs(curr)+suff[i+1]);
    } 
     if(sum==LLONG_MIN)
     {  sum=0; 
        for(int i=0;i<n;i++)sum+=arr[i];
        sum=abs(sum);
     }
    // required smallest sum contiguous subarray value
    return sum;
}
 
 void solve(){
      ll n;cin>>n;
      ll arr[n];
      for(int i=0;i<n;i++){cin>>arr[i];}
      pref[0]=0;
      pref[1]=arr[0];suff[n]=arr[n-1];suff[n+1]=0;
      for(int i=2;i<=n;i++){
         pref[i]=arr[i-1]+pref[i-1];
      }
      for(int i=n-1;i>=1;i--){
        suff[i]=suff[i+1]+arr[i-1];
      }   
      ll sum=(smallestSumSubarr(arr,n));
      
      cout<<sum<<endl;

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