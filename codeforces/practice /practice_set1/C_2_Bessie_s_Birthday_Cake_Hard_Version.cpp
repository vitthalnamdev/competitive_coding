#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
    int n,x,y;cin>>n>>x>>y;
    int temp = y;
    vector<int>arr(x);
    for(int i=0;i<x;i++)cin>>arr[i];
    sort(arr.begin(),arr.end());
    arr.push_back(arr[0]+n);
    vector<int>odd;
    int ans=x-2;int sum=0; 
    for(int i=0;i<x;i++) 
    {
      int diff=arr[i+1]-arr[i]-1;
      if(diff<=1){
       ans+=diff;
      }else if(diff%2){odd.push_back(diff/2);}
       else {sum+=(diff/2);}
    }
     sort(odd.begin(),odd.end());
   
    for(int g: odd){
		if(y >= g){
		 
			ans += g + 1;
			y -= g;
		}
		else{
			ans += y;
			y = 0;
			break;
		}
	}
  for(int i=0;i<odd.size();i++)cout<<odd[i]<<" ";cout<<endl;  
  cout<<ans<<endl;
    int left = min(y,sum);
    y-=left;
    ans+=left;
    int used = temp-y;
    ans+=used;
    cout<<ans<<endl;
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