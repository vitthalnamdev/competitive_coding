#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;
vector<vector<string>>arr(100);
void solve(){
  int n;cin>>n;
  for(int i=0;i<arr[n].size();i++){
      cout<<arr[n][i]<<endl;
  }
return;
}
int main()
{
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;
string a = "169";string c = "961";
arr[1]={"1"};arr[3]={"169","196","961"};
for(int i=5;i<=99;i+=2){
    for(int j=0;j<arr[i-2].size();j++){
        string now = arr[i-2][j];
        now += "00";
        arr[i].push_back(now);
    }
   int z = (i-3)/2;
   string s(z,'0');
   string ok = "1" +s+ "6" + s+"9";
   arr[i].push_back(ok);
   ok = "9" + s + "6" + s + "1";
   arr[i].push_back(ok); 
}
cin>>t;
//  t=1; 
while(t--)
solve();
return 0;
}