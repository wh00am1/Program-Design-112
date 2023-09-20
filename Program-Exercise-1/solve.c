#include <stdio.h>
#define N 4
int main(){
	int x, idx=N-1, ans[N]={0, 0, 0, 0};
	scanf("%d", &x);
	while(x){
		ans[idx]=x&1;
		x>>=1;
		--idx;
	}
	for(int i=0; i<N; ++i)
		printf("%d", ans[i]);
	return 0;
}
