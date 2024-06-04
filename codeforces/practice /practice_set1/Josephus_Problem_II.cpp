#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
//After closer inspection you may find that the last two files contained in the library

#include <ext/pb_ds/detail/standard_policies.hpp> 
using namespace std;
using ll =long long int;
using ull=unsigned long long;
using namespace __gnu_pbds;
typedef tree<
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;
 void solve(){
       int n,k;cin>>n>>k;
       ordered_set x;
       for(int i=1;i<=n;i++){
         x.insert(i);
       }
       int p1=0;
      while(!x.empty())
      {  int now=x.size();
         p1+=k;
         p1%=now;
         int ele=*x.find_by_order(p1);
         auto it=x.find(ele);
         x.erase(it);
         cout<<ele<<" ";
      }
return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
//cin>>t;
 t=1;
while(t--)
solve();
return 0;
}