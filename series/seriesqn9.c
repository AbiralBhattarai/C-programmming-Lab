#include<stdio.h>
#include<conio.h>
void main(){
	float a,b,sum=0,i,n,c=0;
	printf("Enter n: ");
	scanf("%f",&n);
	a=1;
	b=2;
	for(i=1;i<=n;i++){
		sum = sum + pow(-1,c)*(a/b);
		a = a + 1;
		b = b + 1;
		c = c + 1;
	}
	printf("sum = %.2f",sum);
}
