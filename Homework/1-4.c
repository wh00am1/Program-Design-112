#include <stdio.h>

int main(){
	long double a, r1=350, r2=250;
	int b, w1=7, w2=6;
	scanf("%Lf/%d", &a, &b);
	if(a>r1 || b>=w1)
		puts("school and work called off");
	else if(a>r2 && b>=w2)
		puts("school and work called off");
	else
		puts("school and work continue as usual");
	return 0;
}
