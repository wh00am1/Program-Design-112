#include <stdio.h>
#include <stdlib.h>
#define ll long long 
#define int long long
ll ans, inp;
char op;
ll POW(ll base, ll p){
	ll ret=1;
	while(p){
		if(p&1)
			ret *= base;
		base *= base;
		p >>= 1;
	}
	return ret;
}
ll calc(ll a, char b, ll c){
	if(b == '+')
		return a+c;
	else if(b == '-')
		return a-c;
	else if(b == '*')
		return a*c;
	else if(b == '/')
		return a/c;
	else if(b == '^')
		return POW(a, c); 
}
signed main() {
    ll ans;
	int inp, falg=1;
    char op;
    scanf("%llx", (int)&ans);
    while (1) {
        scanf("%c", &op); 
        if (op == '=') break;
        scanf("%llx", (int)&inp);
        if (op == '/' && inp == 0) {
            printf("You can't divide with zero!\n");
            return 0;
        }
        ans = calc(ans, op, inp);
    }
	signed c;
	c=getc(stdin);
	if(c == '-')
		falg=-1;
	else
		ungetc(c, stdin);
	scanf("%llx", &inp);
	inp*=falg;
	if(ans == inp)
		puts("Correct!");
	else{
		falg=-1;
		puts("BaBaBa, It’s wrong.");
		if(ans<0)
			putchar('-');
		else
			falg=1;
		printf("%llx\n", ans*falg);
	}
    return 0;
}
