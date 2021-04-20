#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14

int main(){
	float r,a;
	printf("Enter the radius of the circle");
	scanf("%f",&r);
	a = PI*pow(r,2);
	printf("The area of the circle with radius %f is %f" ,r,a);
	getch();
	return 0;
}
