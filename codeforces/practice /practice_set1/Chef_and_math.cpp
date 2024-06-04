#include <bits/stdc++.h>
using namespace std;

// #define int long long

const int mod = 1e9 + 7;
int add(int a,int b){
    a += b;
    if(a >mod) a-= mod;
    return a;
}
int mul(int a,int b){ return 1ll*a*b%mod; }
int binpow(int a,int b){
    int res = 1;
    while(b){
        if(b&1){
            res = mul(res, a);
        }
        a = mul(a,a);
        b>>=1;
    }
    return res;
}
vector<int > fib;
map<int,int> dp[50][20];
int sol(int i,int x,int k){
    
    if(i == -1){
        return x==0 && k==0;
    }
    
    if(x<0){
        return 0;
    }
    if(k == 0){
        return x==0;
    }
    if(x == 0){
        return k==0;
    }
    if(1ll*fib[i]*k < 1ll*x) return 0;
    if(dp[i][k].find(x) != dp[i][k].end()) return dp[i][k][x];
    int ans =0;
    ans = add(ans, sol(i, x - fib[i], k -1)); // we took this element
    ans = add(ans, sol(i - 1, x, k )); // we didint take this element
    return dp[i][k][x] = ans;
}

int32_t main() {
	// your code goes here
	
	fib.push_back(1);
	fib.push_back(2);
	for(int i = 0;i<60;i++){
	    int x = fib[fib.size() - 2] + fib[fib.size() -1];
	    if(x > 1e9) break;
	    fib.push_back(x);
	}
// 	for(auto x: fib){
// 	    cout << x <<" ";
// 	}
// 	cout << endl;
// 	cout << fib.size() << endl;
	
	int tt;
	cin >> tt;
	while(tt--){
	    int x,k;
	    cin >> x >> k;   
	    cout << sol((int)fib.size() - 1,x, k) << "\n";
	    for(int i =0 ;i<50;i++){
	        for(int j =0;j<20;j++){
	            dp[i][j].clear();
	        }
	    }
	}
	return 0;
}