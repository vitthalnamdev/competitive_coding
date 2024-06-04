#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n,m;cin>>n>>m;
       int arr[n][m];
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
       }
      vector<pair<int,int>>pos(n);
      int sum=0;
      for(int i=0;i<n;i++){
        pos[i].second=i;
        int cnt=0;
         for(int j=0;j<m;j++){
           if(arr[i][j]==1)cnt++;
         }
         sum+=cnt;pos[i].first=cnt;
      }
       sort(pos.begin(),pos.end());
      if(sum%n!=0){
        cout<<-1<<endl;return;
      }
       
    int ele=sum/n;
    int p1=0;int p2=n-1;
      vector<vector<int>>ans;
    while(p2>p1){
        vector<int>temp;
        if(pos[p1].first<ele){
            for(int i=0;i<m;i++){
                if(arr[pos[p2].second][i]==1 &&  arr[pos[p1].second][i]==0){
                    arr[pos[p1].second][i]=1;arr[pos[p2].second][i]=0;
                    pos[p2].first--;pos[p1].first++;
                    temp={pos[p1].second+1,pos[p2].second+1,i+1};
                    if(pos[p2].first<=ele){p2--;i=0;}
                    if(pos[p1].first==ele){ans.push_back(temp);p1++;break;}
                  
                }else{
                    continue;
                }
                ans.push_back(temp);
            }
        }else{
            break;
        }
    }
   // for(int i=0;i<n;i++)cout<<pos[i].first<<" ";cout<<endl;
     cout<<ans.size()<<endl;
     for(int i=0;i<ans.size();i++){
        for(int j=0;j<3;j++)cout<<ans[i][j]<<" ";
        cout<<endl;
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