#include <stdio.h>

int main(){
	int h1, a1, h2, a2;
	scanf("%d %d %d %d", &h1, &a1, &h2, &a2);
	while(h2>0){
		//printf("%d %d\n", h1, h2);
		h2-=a1;
		if(h2<=0)
			break;
		h1-=a2;
	}
	if(h1>0)
		puts("Elma wins");
	else
		puts("Dragon King wins");
	return 0;
}
