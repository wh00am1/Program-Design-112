#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define mx 100
char mp[mx][mx], ax;
int n, x, y, cc=0;
//int d4i={-1, 1, -1, 1};
void movq(){
	int nx=x, ny=y;
	if(ax=='w') --nx;
	if(ax=='s') ++nx;
	if(ax=='a') --ny;
	if(ax=='d') ++ny;
	if(nx>=0 && nx<n && ny>=0 && ny<n && mp[nx][ny]!='X'){
		if(mp[nx][ny]=='C')
			cc+=3;
		mp[nx][ny]='Q';
		mp[x][y]='O';
		x=nx;
		y=ny;
	}
}
void expm(){
	char tmp[mx][mx];
	memcpy(tmp, mp, sizeof(mp));
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			if(mp[i][j]=='X'){
				if(i-1>=0 && mp[i-1][j]=='O') tmp[i-1][j]='X';
				if(i+1<n && mp[i+1][j]=='O') tmp[i+1][j]='X';
				if(j-1>=0 && mp[i][j-1]=='O') tmp[i][j-1]='X';
				if(j+1<n && mp[i][j+1]=='O') tmp[i][j+1]='X';
			}
		}
	}
	memcpy(mp, tmp, sizeof(mp));
}
void print(){
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j)
			printf("%c", mp[i][j]);
		printf("\n");
	}
}
int main(){
	scanf("%d", &n);
	char ch;
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			scanf(" %c", &ch);
			if(ch=='Q'){
				x=i;
				y=j;
			}
			mp[i][j]=ch;
		}
	}
	int t;
	scanf("%d", &t);
	while(t--){
		scanf(" %c", &ax);
		movq();
		if(cc){
			--cc;
			continue;
		}
		expm();
	}
	print();
	return 0;
}
