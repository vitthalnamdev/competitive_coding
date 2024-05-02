#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;cin>>n;
       int arr[n+1];
       for(int i=1;i<=n;i++)cin>>arr[i];
       int q;cin>>q;
       vector<int>prev1(n+1,0),prev2(n+1,0);
       for(int i=1;i<=n;i++){
        prev1[i]+=prev1[i-1];
        prev2[i]+=prev2[i-1];
        if(arr[i]==2)prev2[i]++;
        if(arr[i]==1)prev1[i]++;
       }
       while(q--)
       {
        ll l,r,ele;cin>>l>>r>>ele;
        ll two = prev2[r]-prev2[l-1];
       ll one = prev1[r]-prev1[l-1];
       ll prevele=ele;
        ele=min(ele,r-l+1-(two+one));
        ll leftele=prevele-ele;
         if(one<two){
            ll rem=two-one;
            rem=(min(rem,ele));
            one+=rem;
            ele-=rem;
            one+=(ele/2);
            two+=(ele/2);
            two+=(ele%2);
            ll ok = (two - one )/2;
            ok = min(ok ,leftele);
            two -=ok;
            one += ok ;
            cout<<(one*two)<<endl;
         }else if(two<one){
            ll rem=one-two;
            rem=(min(rem,ele));
            two+=rem;
            ele-=rem;
            one+=(ele/2);
            two+=(ele/2);
            one+=(ele%2);
            ll ok = (one - two )/2;
            ok = min(ok ,leftele);
            one -=ok;
            two  += ok ;
            cout<<(one*two)<<endl;
         }else{
           ll rem=two-one;
            rem=(min(rem,ele));
            one+=rem;
            ele-=rem;
            one+=(ele/2);
            two+=(ele/2);
            one+=(ele%2);
             
            cout<<(one*two)<<endl;
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