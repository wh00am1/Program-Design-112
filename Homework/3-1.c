#include <stdio.h>
#define int long long
signed main(){
	unsigned int x, y, m, ans=1;
	scanf("%lld %lld %lld", &x, &y, &m);
	while(y){
		if(y&1)
			ans = ans*x%m;
		x = x*x%m;
		y >>= 1;
	}
	printf("%lld\n", ans);
	return 0;
}
