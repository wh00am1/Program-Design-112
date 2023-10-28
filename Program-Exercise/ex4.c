#include <stdio.h>

int main(){
	int N, GoalX, GoalY;
	int d4i[4]={1, -1, -1, 1};
	int pos[2]={0, 0}; 
	scanf("%d %d %d", &N, &GoalX, &GoalY);
	int t, s;
	while(N--){
		scanf("%d %d", &t, &s);
		--t;
		pos[t>1]+=d4i[t]*s;
		//printf("%d %d\n", pos[0], pos[1]); //debug
	}
	if(pos[0]==GoalY && pos[1]==GoalX)
		puts("I reached the goal. Ya!");
	else
		printf("I did not reach the goal! I am at (%d, %d)", pos[1], pos[0]);

	return 0;
}
