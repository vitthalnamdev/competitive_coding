        #include<bits/stdc++.h>
        using namespace std;
        #define ll long long 
        bool cmp(pair<int,int>a,pair<int,int>b)
        {
            return a.first>b.first;
        }
        void solve(){
        int n,f,k;cin>>n>>f>>k;
        vector<pair<int,int>>arr(n);
        for(int i=0;i<n;i++){
        cin>>arr[i].first;arr[i].second=i+1;
        }
        int ele = arr[f-1].first;
        sort(arr.begin(),arr.end(),cmp);
        int ans = -1;
        for(int i=0;i<k;i++){
        if(arr[i].first==ele)
        {
            while(i<n && arr[i].first==ele)i++;
            if(i>k)ans=2;
            else ans = 1;
            break;
        }
        } 
        if(ans==-1){
            cout<<"NO"<<endl;
        }else if(ans==2){
            cout<<"MAYBE"<<endl;
        }else {
            cout<<"YES"<<endl;
        }
        }
        
        int main(){
        std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
        int t;cin>>t;
        while(t--){
        solve();
        }
        }