#include<stdio.h>
#include<conio.h>


int main(){
	float p,t,r,si;
	printf("enter the principal amount");
	scanf("%f",&p);
	printf("enter the time in years");
	scanf("%f",&t);
	printf("enter the rate of interest");
	scanf("%f",&r);
	si = (p*t*r)/100;
	printf("The simple interest is %f", si);
	getch();
	return 0;
}
