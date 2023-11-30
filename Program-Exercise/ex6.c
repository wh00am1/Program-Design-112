#include <stdio.h>
#define int long long
int ans, inp, flag=1, zf=0;
char op;
void qp(){
	int base=ans, res=1;
	while(inp){
		if(inp&1)
			res*=base;
		base*=base;
		inp>>=1;
	}
	ans=res;
}
void calc(){
	if(op=='+')
		ans+=inp;
	if(op=='-')
		ans-=inp;
	if(op=='*')
		ans*=inp;
	if(op=='/'){
		if(inp==0){
			zf=1;
			inp=1;
		}
		ans/=inp;
	}
	if(op=='^')
		qp();
}
signed main(){
	scanf("%llx", &ans);
	while(scanf("%c", &op)!=EOF){
		if(op=='='){
			scanf("%llx", &inp);
			if(zf)
				puts("You can't divide with zero!");
			else if(inp==ans)
				puts("Correct!");
			else{
				puts("BaBaBa, It's wrong.");
				if(ans<0){
					printf("-");
					ans=-ans;
				}
				printf("%llx\n", ans);
			}
		}
		else{
			scanf("%llx", &inp);
			calc();
		}
	}
	return 0;
}
