#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n,q;cin>>n>>q;
       set<int>row,col;
       for(int i=1;i<=n;i++)row.insert(i),col.insert(i);
      // cout<<row.size()<<" "<<col.size()<<endl;
      map<int,int>countrow,countcol;
       while(q--)
       {
         int t;cin>>t;
         if(t==1){
            int a,b;cin>>a>>b;
            countrow[a]++;countcol[b]++;
            auto it = row.find(a);
            if(it!=row.end())
            row.erase(row.find(a));
             it = col.find(b);
            if(it!=col.end())
            col.erase(col.find(b));
         }else if(t==2){
            int a,b;cin>>a>>b;
            countrow[a]--;countcol[b]--;
            if(countrow[a]==0)
            row.insert(a);
            if(countcol[b]==0)
            col.insert(b);
         }else{
            int a,b,c,d;cin>>a>>b>>c>>d;
            auto it=row.lower_bound(a);
            if(it==row.end()){
                cout<<"Yes"<<endl;continue;
            }
            if(*it>c){cout<<"Yes"<<endl;continue;}
            it = col.lower_bound(b);
            if(it==col.end()){
                cout<<"Yes"<<endl;continue;
            }
            if(*it>d){cout<<"Yes"<<endl;continue;}

            cout<<"No"<<endl;
         }
       }

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