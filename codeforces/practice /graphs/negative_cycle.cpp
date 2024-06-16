#include<bits/stdc++.h>
using namespace std;
#define ll long long 
struct Edge {
    ll a, b, cost;
};

int n, m;
vector<Edge> edges;
const ll INF = LLONG_MAX;

void solve()
{
    vector<ll> d(n+1);
    vector<ll> p(n+1, -1);
    ll x;
    for (int i = 0; i < n; ++i) {
        x = -1;
        for (Edge e : edges) {
            if(d[e.a] < INF){   
                if (d[e.a] + e.cost < d[e.b]) {
                    d[e.b] = max(-INF, d[e.a] + e.cost);
                    p[e.b] = e.a;
                    x = e.b;
                }
            }
        }
    }

    if (x == -1) {
       cout<<"NO"<<endl;
    } else {
        for (int i = 0; i < n; ++i)
            x = p[x];

        vector<int> cycle;
        for (int v = x;; v = p[v]) {
            cycle.push_back(v);
            if (v == x && cycle.size() > 1)
                break;
        }
        reverse(cycle.begin(), cycle.end());

        cout << "YES"<<endl;
        for (int v : cycle)
            cout << v << ' ';
        cout << endl;
    }
}

int main(){
    cin>>n>>m;
    for(int i=0;i<m;++i){
        ll a, b, c;cin>>a>>b>>c;
        edges.push_back({a,b,c});
    }
    solve();
}