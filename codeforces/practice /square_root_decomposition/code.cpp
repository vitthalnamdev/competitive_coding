// this is correct code.

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll arr[200005];
ll n;
ll ans[2000];
void construct(){
    int num = sqrt(n);
    for(int i=0;i<n;i++){
        ans[i/num] +=(arr[i]);
    }
}
 
int main(){
cin>>n;int q;cin>>q;
for(int i=0;i<n;i++)cin>>arr[i];
construct();
 int len = sqrt(n);
while(q--){
    int a, b;cin>>a>>b;
    a--;b--;
     
     ll  sum = 0;
    for (int i=a; i<=b; )
        if (i % len == 0 && i + len - 1 <= b) {
            
            sum += ans[i / len];
            i += len;
        }
        else {
            sum += arr[i];
            ++i;
        }
        cout<<sum<<endl;
}
}