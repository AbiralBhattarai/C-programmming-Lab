#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14

int main(){
	float a,b,area;
	printf("Enter the length of major axis");
	scanf("%f",&a);
	printf("Enter the length of minor axis");
	scanf("%f",&b);
	area = PI*a*b;
	printf("The area of the ecclipse with major axis %f and minor axis %f is %f",a,b,area);
	getch();
	return 0;
}
