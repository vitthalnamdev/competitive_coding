#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

void solve(){
    int n,k,q;cin>>n>>k>>q;
    vector<pair<double,double>>arr(k);
    for(int i=0;i<k;i++){
        cin>>arr[i].first;
    }      
    for(int i=0;i<k;i++){
        cin>>arr[i].second;
    }
    while(q--)
    {
        double dist;cin>>dist;
        if(dist==0){
            cout<<0<<" ";continue;
        }
        auto it = lower_bound(arr.begin(),arr.end(),make_pair(dist,0.0))-arr.begin();
        
        double speed = (arr[it].second-(it-1>=0?arr[it-1].second:0))/(arr[it].first-(it-1>=0?arr[it-1].first:0));
        
        speed*=(dist-(it-1>=0?arr[it-1].first:0));
         
        //speed=round(speed);
        int newspeed = (it-1>=0?arr[it-1].second:0) + speed;
        cout<<newspeed<<" ";
    }cout<<endl;
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