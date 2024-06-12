#include<cstdio>
#include<iostream>
using namespace std;
const int N=2e5+10;
int n,mod;
long long ans,dp[N];
int main()
{
	scanf("%d%d",&n,&mod);
	dp[1]=1;ans=1;
	for(int i=2;i<=n;i++)
	{
		dp[i]=ans;
		for(int l=2,r;l<=i;l=r+1)
		{
			r=i/(i/l);
			dp[i]=(dp[i]+dp[i/l]*(r-l+1))%mod;
		}
		ans=(dp[i]+ans)%mod;
	}
	printf("%lld",dp[n]);
	return 0;
}
