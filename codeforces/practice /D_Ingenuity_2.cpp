#include<bits/stdc++.h>
using namespace std;
  #define ll long long 
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    map<char,int>count;
    for(int i=0;i<n;i++){
        count[s[i]]++;
    }
    if((count['N']+count['S'])%2 || (count['E'] + count['W'])%2){
        cout<<"NO"<<endl;return;
    }
    string ans="HR";int ind = 0;
    count.clear();
    count['E']=1;count['W']=1;
    string newans="";
    for(int i=0;i<n;i++){
       newans+=ans[(count[s[i]])];
       count[s[i]]^=1;
    }
    char curr='a';
    int cnt=0;
    for(int i=0;i<n;i++){
        if(curr!=newans[i]){
            curr=newans[i];cnt++;
        }
    }
    if(cnt==1){
        cout<<"NO"<<endl;return;
    }
    cout<<newans<<endl;
}
int main(){
std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
int t;cin>>t;
while(t--){
solve();
}
}