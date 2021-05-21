#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,c,n,i;
	a=0;
	b=1;
	printf("Enter the no of fibonacci terms you want: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
	getch();
}
