#include <stdio.h>
#define int unsigned long long

int p;
int calc(int a, int n){
	int ret=1;
	while(n){
		if(n&1)
			ret *= a;
		a *= a;
		n >>= 1;
	}
	return ret;
}
void solve(){ //p = i^8 + 7*mb^3
	int r=0, b=0;
	for(int i=0; i<=10001; ++i){
		int t=p-calc(i, 8);
		if(!(t%7)){
			int cmp=t/7;
			int lb=0, rb=1000001;
			while(lb<=rb){
				int mb=(lb+rb)/2;
				int tmp=calc(mb, 3);
				//printf("t -> %lld, LB -> %lld, RB ->  %lld, MB -> %lld, tmp -> %lld\n", t, lb, rb, mb, tmp);
				if(tmp==cmp){
					r=i;
					b=mb;
					break;
				}
				else if(tmp<cmp)
					lb=mb+1;
				else
					rb=mb-1;
			}
			if(r&&b)
				break;
		}
	}
	printf("%lld %lld\n", r, b);
}
signed main(){
	scanf("%llu", &p);
	solve();
	return 0;
}
