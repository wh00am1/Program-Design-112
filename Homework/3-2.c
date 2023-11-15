#include <stdio.h>
#include <stdlib.h>
#define ll long long
#define int ll
const int INF=0x3f3f3f3f3f3f3f3f;
int dp[100];
signed main(){
	int n, ans=2;
	dp[0]=dp[1]=1;
	scanf("%lld", &n);
	if(n==1)
		puts("1");
	else if(n==2)
		puts("2");
	else{
		for(int i=2; i<n; ++i){
			dp[i] = dp[i-1]+dp[i-2];
			ans += dp[i];
		}
		printf("%lld\n", ans);
	}
	return 0;
}
