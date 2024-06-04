    #include<bits/stdc++.h>
    using namespace std;
    using ll =long long int;
    using ull=unsigned long long;

    void solve(){
        int n,m;cin>>n>>m;
        vector<int>arr(n),brr(m);
            multiset<int,greater<int>>s;
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<m;i++)cin>>brr[i];
            
        if(n<4 || m<4 || n+m<11){
            cout<<-1<<endl;return;
        }
        sort(arr.begin(),arr.end());
        sort(brr.begin(),brr.end());
        ll ans=0;
    int cnt=0;
        for(int i=n-1;i>=0;i--){
            if(cnt<4){ans+=(arr[i]);
            cnt++;
            }else{
                s.insert(arr[i]); 
            }
            
        }cnt=0; 
        for(int i=m-1;i>=0;i--){
            if(cnt<4){ans+=(brr[i]);
            cnt++;
            }else{
                s.insert(brr[i]);
            }
        }
        
        cnt=0;
        for(auto i:s){
            ans+=(i);cnt++;
            if(cnt>=3){break;}
        }
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