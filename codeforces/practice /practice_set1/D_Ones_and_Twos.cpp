#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n,q;cin>>n>>q;
       int arr[n];
       set<int>ones;
       int sums=0;
       for(int i=0;i<n;i++){
         cin>>arr[i];sums+=arr[i];
         if(arr[i]==1){
              ones.insert(i);
         }
       }
       while(q--)
       {
          int x;cin>>x;
          if(x==1){
            int v;cin>>v;
            int sum = ones.size() + (n-ones.size())*2;
            if(sum%2==0){
                if(v%2==1 && ones.size()>0 && v<=sum){
                    cout<<"YES"<<endl;
                }else if(v%2==0 && v<=sum){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }else{
                if(v%2==1 && v<=sum){
                    cout<<"YES"<<endl;
                }else if(v%2==1){
                    cout<<"NO"<<endl;
                }else{
                    int s1 = max(*ones.begin()*2 , (sum - *ones.begin()));
                    int s2 = max((n-*ones.rbegin()-1)*2,sum-(n-*ones.rbegin()-1)*2);
                    s1 = max(s1,s2);
                    if(v<=s1){
                        cout<<"YES"<<endl;
                    }else{
                        cout<<"NO"<<endl;
                    }
                }
            }        
          }else{
            int i,ele;cin>>i;
            i--;sums-=arr[i];
            ones.erase(i);
            cin>>arr[i];    
            if(arr[i]==1){
                ones.insert(arr[i]);
            }
            sums+=arr[i];
          }
       }

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