#include<stdio.h>
#include<conio.h>
void main(){
	int n,i,j,sum=0,term;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			term = j;
			sum = sum + term;
		}
	}
	printf("Sum = %d",sum);
}
