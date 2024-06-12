#include <algorithm>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <string>
#include <vector>
typedef long long ll;
typedef long double ld;
using namespace std;
bool istrue(vector<int>&arr,vector<int>&ans,int i){
  if(ans[i]+arr[i]>ans[i-1]+arr[i-1] && ans[i]+arr[i]>ans[i+1]+arr[i+1]){
        return true;
    }return false;
} 
int cal(vector<int>&arr,vector<int>&ans){
    int n= ans.size();int count = 0;
    for(int i=1;i<=n-2;i++){
       if(istrue(arr,ans,i)){
          count++;
       }
    }
    return count;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];
        vector<int> q(n);
        int nid = find(p.begin(), p.end(), n) - p.begin();
        if (!(nid & 1)) // maximums will be on the even positions
        {
            vector<pair<int, int> > v;
            for (int i = 1; i < n; i += 2) v.push_back({ p[i], i });
            v.push_back({ p[0], 0 });
            for (int i = 2; i < n; i += 2) v.push_back({ p[i], i });
            sort(v.begin(), v.begin() + (n / 2), greater<pair<int, int> >());
            sort(v.begin() + (n / 2) + 1, v.begin() + n, greater<pair<int, int> >());
            for (int i = 0; i < n; i++) q[v[i].second] = i + 1;
        }
        else // maximums will be on the odd positions
        {
            vector<pair<int, int> > v;
            for (int i = 0; i < n; i += 2) v.push_back({ p[i], i });
            v.push_back({ p[n - 1], n - 1 });
            for (int i = 1; i < n - 1; i += 2) v.push_back({ p[i], i });
            sort(v.begin(), v.begin() + (n / 2), greater<pair<int, int> >());
            sort(v.begin() + (n / 2) + 1, v.begin() + n, greater<pair<int, int> >());
            for (int i = 0; i < n; i++) q[v[i].second] = i + 1;
        }
        // cout<<cal(p,q)<<endl;
        for(int i=0;i<n;i++)cout<<q[i]+p[i]<<" ";cout<<endl;
    //    for (int i = 0; i < n; i++) cout << q[i] << " \n"[i == n - 1];
    }
    return 0;
}