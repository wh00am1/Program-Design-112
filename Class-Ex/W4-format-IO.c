#include <stdio.h>

int main(){
	int i=40, j;
	float x=839.21f, y;
	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i); // demo code for first part of the slide
	printf("|%10.3f|%10.3e|%-10e|\n", x, x, x);

	scanf("%d%d%f%f", &i, &j, &x, &y); // demo code for second part of the slide
	printf("%d %d %.3f %.3f", i, j, x, y);
	return 0;
}
