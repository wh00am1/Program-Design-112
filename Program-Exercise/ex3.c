#include <stdio.h>

int main(){
	int arr[4][2]={
		{18*60, 24*60},
		{10*60, 17*60},
		{20*60, 24*60},
		{16*60+30, 22*60+30}};
	int id, h, m, p;
	scanf("%d %d %d %d", &id, &h, &m, &p);
	int t=60*h+m;
	if(h==0 && m==0)
		t=60*24; //edge
	if(id==0){
		if(t>=arr[0][0] && t<=arr[0][1])
			p*=0.7;
	}
	else if(id==1){
		if(t>=arr[1][0] && t<=arr[1][1])
			p*=0.65;
		else if(t>=arr[2][0] && t<=arr[2][1])
			p*=0.65;
	}
	else{
		if(t>=arr[3][0] && t<= arr[3][1])
			p*=0.6;
	}
	printf("%d", p);
	return 0;
}
