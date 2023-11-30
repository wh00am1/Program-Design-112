#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char map[5][5];
char cset[4] = {'w', 's', 'a', 'd'};
char s;
int d4i[4] = {-1, 1, 0, 0};
int d4j[4] = {0, 0, -1, 1};
int x, y, dis, cnt=0, flag=0;

void initializeMap(){
	memset(map, 0x2d, sizeof(map));
	map[2][0] = '$';
	map[4][4] = '$';
	map[1][3] = '$';
	map[x][y] = 'P';
}
void movePlayer(){
	int res;
	for(int i=0; i<4; ++i)
		if(cset[i] == s)
			res=i;
	int nx=x + d4i[res]*dis;
	int ny=y + d4j[res]*dis;
	if(nx>=0 && nx<=4 && ny>=0 && ny<=4){
		map[x][y]='-';
		x=nx;
		y=ny;
		if(cnt==2 && map[x][y]=='$')
			flag=1;
		map[x][y]='P';
	}
}
void displayMap(){
	for(int i=0; i<5; ++i){
		for(int j=0; j<5; ++j)
			printf("%c ", map[i][j]);
		printf("\n");
	}
}
int main(){
	scanf("%d %d", &x, &y);
	initializeMap();
	for(int i=0; i<3; ++i){
		scanf(" %c %d", &s, &dis);
		movePlayer();
		++cnt;
		//displayMap(); //debug
		//printf("x : %d, y : %d", x, y);
		//puts(""); //debug
	}
	displayMap();
	if(flag)
		puts("I found it!");
	else
		puts("I didn't find it!");
	return 0;
}
