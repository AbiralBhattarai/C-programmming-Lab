#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	int a,i,n,b;
	printf("Enter how many terms you want:");
	scanf("%d",&n);
	a=-10;
	b=-2;
	for(i=0;i<=n;i++){
		printf("%d\t",a);
		a = a + b;
		b = -2 *pow(2,i);	
	}
}
