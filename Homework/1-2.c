#include <stdio.h>
#include <stdlib.h>

int cmp(void const *a, void const *b){
	return *(int*)a-*(int*)b;
}
int main(){
	int s[3];
	scanf("%d %d %d", &s[0], &s[1], &s[2]);
	qsort(s, 3, sizeof(int), cmp);
	int c=s[0]*s[0]+s[1]*s[1]-s[2]*s[2];
	if(c>0)
		puts("Acute triangle");
	else if(c==0)
		puts("Right-angled triangle");
	else
		puts("Obtuse triangle");
	return 0;
}
