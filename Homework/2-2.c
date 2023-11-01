#include <stdio.h>

int main(){
	int tot, tp, cd, v;
	scanf("%d %d %d %d", &tot, &tp, &cd, &v);
	--cd;
	int ans=0, flag=0;
	while(tot>0){
		if(flag){
			for(int i=0; i<cd; ++i){
				if(tot<=0)
					break;
				tot-=v;
				++ans;
			}
			flag^=1;
		}
		else{
			tot-=tp;
			tot-=v;
			++ans;
			flag^=1;
		}
	}
	printf("%d\n", ans);
	return 0;
}
