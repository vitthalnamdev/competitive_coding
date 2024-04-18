    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long
    #define ld long double
    #define pb push_back
    #define fi first
    #define se second

    typedef vector<int> vi;
    typedef vector<ll> vll;
    typedef vector<vector<int>> vvi;
    
    pair<int,int> minSubarray(vi &arr){
        int n = arr.size();
        ll maxPrefix = 0;
        ll minAns = LLONG_MAX;
        ll curr = arr[0];
        int r = -1;
        for(int i = 1; i < n; i++){
            curr += arr[i];
            if(minAns > curr-maxPrefix){
                r = i;
                minAns = curr-maxPrefix;
            }
            maxPrefix = max(curr-arr[i],maxPrefix);
        }
        
        curr = 0;
        int l;
        for(int i = r; i >= 0; i--){
            curr += arr[i];
            if(curr == minAns) l = i;
        }
        
        return {l,r};
    }

    int main(){
        ll t; cin>>t;
        while(t--){
            int n; cin>>n;
            vi arr;
            for(int i = 0; i < n; i++){
                int tt; cin>>tt;
                arr.pb(tt);
            }
            if(n==1){
                cout<<arr[0]<<endl;
                continue;
            }
            auto [l,r] = minSubarray(arr);
            
            ll a = 0,b = 0,c = 0;
            for(int i = 0; i < l; i++){
                a += arr[i];
            }
            for(int i = l; i <= r; i++){
                b+=arr[i];
            }
            b = abs(b);
            for(int i = r+1; i < n; i++){
                c+=arr[i];
            }
            
            cout<<a+b+c<<endl;
        }	
        return 0;
    }