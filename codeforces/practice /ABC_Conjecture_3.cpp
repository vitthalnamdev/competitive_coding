#include<bits/stdc++.h>
using namespace std;
using ll =long long int;
using ull=unsigned long long;

 void solve(){
       int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0;
    int b = 0;
    int c = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
            a++;
        if (s[i] == 'b' && a > 0)
            b=a;
        else if (s[i] == 'c' && b > 0 && a > 0)
        {
            count++;
            a--;
            b--;
        }
    }
    cout << count << '\n';





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