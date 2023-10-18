#include <stdio.h>

char g[3], s[6]="\n-----";
int main(){
	for(int i=0; i<3; ++i){
		scanf("%3s", g);
		for(int i=0; i<3; ++i){
			printf("%c", g[i]);
			if(i<2)
				putchar('|');
		}
		if(i<2)
			puts(s);
	}
	return 0;
}
