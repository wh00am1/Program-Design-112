#include <stdio.h>

int main(){
	int q;
	unsigned long long x, y;
	//printf("How many exponents you want to find: ");
	scanf("%d", &q);
	while(q--){
		//printf("Please enter x and y: ");
		scanf("%llu %llu", &x, &y);
		unsigned long long ans=0;
		while(y^1){
			//printf("%llu %llu\n", y, ans);
			y/=x;
			++ans;
		}
		printf("%llu\n", ans);
	}
	return 0;
}
