#include <bits/stdc++.h>

#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define mp make_pair

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int tt;
    cin >> tt;
    
    while (tt--) {
        int n;
        cin >> n;
        vector<string> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int ans = 0;
        vector<vector<int> > val(n, vector<int>(n, 0));
        vector<vector<int> > sum(n, vector<int>(n, 0));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == 0) {
    
                } else if (i == 1) {         
                    for (int k = max(0, j - 1); k <= min(j + 1, n - 1); ++k) {
                        sum[i][j] ^= sum[i - 1][k];
                    }
                } else {
                    if (j == 0) {
                        sum[i][j] ^= sum[i - 2][j];
                    } else {
                        sum[i][j] ^= sum[i - 1][j - 1];
                    }
                    if (j == n - 1) {
                        sum[i][j] ^= sum[i - 2][j];
                    } else {
                        sum[i][j] ^= sum[i - 1][j + 1];
                    }
                    sum[i][j] ^= sum[i - 2][j];
                    sum[i][j] ^= val[i - 1][j];
                }
                if (sum[i][j] ^ (a[i][j] - '0')) {
                    ++ans;
                    sum[i][j] ^= 1;
                    val[i][j] = 1;
                }
            }
        }
        cout << ans << "\n";
    }

}