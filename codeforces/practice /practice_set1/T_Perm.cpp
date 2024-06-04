#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
vector<int>check(int number){
    vector<int>answer;
    while(number>0){
        int curr=number%3;
        answer.push_back(curr);
        number/=3;
    }
    for(int i=answer.size();i<=31;i++){
        answer.push_back(0);
    }reverse(answer.begin(),answer.end());
    return answer;
}
 void solve(){
       int n;cin>>n;
       if(n%3==2){
          int arr[n+1];
          for(int i=3;i<=n;i+=3){
           //cout<<i-2<<" "<<i<<" "<<i-1<<" ";
          arr[i-2]=i-2;arr[i-1]=i;arr[i]=i-1;
        }arr[n-1]=n-1;arr[n]=n;
        int curr=n;curr/=3;curr%=3;

        for(int i=1;i<=n-1;i++){
            vector<int>ii=check(i+arr[n]);
            vector<int>ai=check(n+arr[i]);
            int cnt=0;bool f=0;
            bool f2=0;
            for(int j=0;j<=31;j++){
              if(ii[j]==2){  f=1;}
              if( ai[j]==2){  f2=1;}
            }
            if(f && f2){
                swap(arr[i],arr[n]);break;
            }
        }
        for(int i=1;i<=n;i++)cout<<arr[i]<<" ";cout<<endl;
       }else if(n%3==1){
        for(int i=3;i<=n;i+=3){
           cout<<i-2<<" "<<i<<" "<<i-1<<" ";
        }cout<<n<<endl;
       }else{
          for(int i=3;i<=n;i+=3){
            cout<<i-2<<" "<<i<<" "<<i-1<<" ";
          }cout<<endl;
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