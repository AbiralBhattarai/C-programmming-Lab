#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int a,b;
	printf("enter number1: ");
	scanf("%d",&a);
	printf("enter number2: ");
	scanf("%d",&b);
	int a1=a;
	int b1 = b;
	int c = b;
	int d = a;
	a = c;
	b = d;
	printf("%d",a);
	printf("%d",b);
	
}
