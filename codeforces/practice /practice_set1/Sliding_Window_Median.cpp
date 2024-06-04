#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    multiset<int>s;
    for(int i=0;i<k;i++)s.insert(arr[i]);
    int count = s.size()/2 +s.size()%2;    
    int median;int temp = count;
    for(auto i:s){
       count--;
       if(count==0){median = i;break;}   
    } 
    multiset<int,greater<int>>bmedian;
    multiset<int>amedian;
    for(int i=0;i<k;i++){
      if(arr[i]<median){bmedian.insert(arr[i]);}
      else amedian.insert(arr[i]);
    }
    int p2=k;int p1=0;
    while(p2<n){
      cout<<median<<" ";
      if(arr[p1]<median){
         bmedian.erase(bmedian.find(arr[p1]));
         p1++;
      }else{
         amedian.erase(amedian.find(arr[p1]));
         p1++;
      }
       if(arr[p2]>=median){amedian.insert(arr[p2++]);}
       else bmedian.insert(arr[p2++]);
       while(bmedian.size()>=temp){
          int ele = *bmedian.begin();
          bmedian.erase(bmedian.begin());
          amedian.insert(ele);
       }
       while(bmedian.size()<temp-1){
         int ele = *amedian.begin();
          amedian.erase(amedian.begin());
          bmedian.insert(ele);
       } 
       median = *amedian.begin();
    }
    cout<<median<<endl;
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