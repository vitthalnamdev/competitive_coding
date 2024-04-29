#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
  int n;cin>>n;int prev=0;
  for(int i=1;i<n;i++){
    cout<<"? "<<prev<<" "<<prev<<" "<<i<<" "<<i<<endl;
    char sign;scanf("%c",&sign);
    if(sign=='<'){
      prev=i;
    }
  }       
  vector<int>ind;
  int p1=0,p2=1;
  while(p2<n && p1<n){
    if(p1==prev)p1++;
    if(p2==prev)p2++;
    char sign;
    cout<<"? "<<p1<<" "<<prev<<" "<<p2<<" "<<prev<<endl;
   scanf("%c",&sign);
    if(sign=='<'){
       ind.clear();ind.push_back(p2);p1=p2++;
    }else{
        ind.push_back(p2++);
    }
  }int newprev=ind[0];
   for(int i=1;i<ind.size();i++){
    cout<<"? "<<newprev<<" "<<newprev<<" "<<ind[i]<<" "<<ind[i]<<endl;
    char sign;scanf("%c",&sign);
    if(sign=='>'){
      newprev=ind[i];
    }
  }
  cout<<"! "<<newprev<<" "<<prev<<endl;
   fflush(stdout);


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