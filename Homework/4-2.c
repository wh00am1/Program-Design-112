#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s[10], ans[10];
int n, vis[10];
int cmp(const void *a, const void *b){
	return *(char*)a-*(char*)b;
}
void dfs(int v){
	if(v==n){
		printf("%s\n", ans);
		return;
	}
	for(int i=0; i<n; ++i){
		if(vis[i])
			continue;
		vis[i]=1;
		ans[v]=s[i];
		dfs(v+1);
		vis[i]=0;
	}
}
int main(){
	memset(s, 0, sizeof(s));
	memset(ans, 0, sizeof(ans));
	memset(vis, 0, sizeof(vis));
	scanf("%10s", s);
	n=strlen(s);
	qsort(s, n, sizeof(char), cmp);
	dfs(0);
	return 0;
}
