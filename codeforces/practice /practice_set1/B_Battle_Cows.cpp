    #include<bits/stdc++.h>
    using namespace std;
    using ll =long long int;
    using ull=unsigned long long;

    void solve(){
        int n,k;cin>>n>>k;
        k--;
        int arr[n];
        int ans=0;bool f=0;
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<k;i++){
            if(arr[i]>arr[k]){
                f=1;
              ans=max(ans,i-1);
              swap(arr[i],arr[k]);k=i;break;
            }
        } 
        if(f==0){
            swap(arr[0],arr[k]);k=0;
        }f=0;
        for(int i=k;i<n;i++){
            if(arr[i]>arr[k]){
                f=1;
                ans=max(ans,i-k+(k-1>=0?1:0)-1);
                break;
            }
        }
        if(f==0){
             
            ans=max(ans,n-k+(k-1>=0?1:0)-1);
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