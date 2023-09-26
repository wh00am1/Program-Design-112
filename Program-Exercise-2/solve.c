#include <stdio.h>

int main(){
	int t, h=0, m=0, s=0;
	scanf("%d", &t);
	while(t>=3600){
		t-=3600;
		h++;
	}
	while(t>=60){
		t-=60;
		m++;
	}
	s+=t;
	printf("%d h %d m %d s\n", h, m, s);
	return 0;
}
