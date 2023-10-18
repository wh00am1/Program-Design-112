#include <stdio.h>

int main(){
	long double h, w;
	scanf("%Lf/%Lf", &h, &w);
	h/=100;
	w/=h*h; //BMI
	if(w<18.5)
		puts("Underweight");
	else if(w<24)
		puts("Normal Weight");
	else if(w<27)
		puts("Overweight");
	else if(w<30)
		puts("Mildly Obese");
	else if(w<35)
		puts("Moderately Obese");
	else
		puts("Severely Obese");
	return 0;
}
