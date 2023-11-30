#include <stdio.h>

int main(){
	int ans[45], n;
	scanf("%d", &n);
	ans[0]=1;
	ans[1]=2;
	for(int i=2; i<n; ++i)
		ans[i]=ans[i-1]+ans[i-2];
	printf("%d\n", ans[n-1]);
	return 0;
}
