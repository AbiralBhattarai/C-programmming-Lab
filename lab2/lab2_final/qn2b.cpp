#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int a,b;
	printf("enter number1: ");
	scanf("%d",&a);
	printf("enter number2: ");
	scanf("%d",&b);
	a = a + b;
	b = a - b ;
	a = a - b;
	printf("%d\n",a); 
	printf("%d\n",b);
}
