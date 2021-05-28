#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	int a,b,c,d=0,i,n,sum = 0;
	printf("Enter value of n: ");
	scanf("%d",&n);
	a = 1;
	b = 3;
	sum = sum + a;
	for(i=0;i<=(n-3);i++){
		c = 1;
		while(c<=2){
			printf("%d\t",sum);
			sum = sum + pow(3,i);
			c = c + 1;
		}
	}
}
