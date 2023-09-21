#include <stdio.h>

int main(){
	int i=20;
	float x=123.456f, y=5527.0f;
	printf("%e\n", y);
	printf("%.3e\n", y);
	printf("%-5d\n", i);
	printf("%10.3f\n", x);
	return 0;
}
