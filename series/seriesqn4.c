#include<stdio.h>
#include<conio.h>
void main(){
	int n,i,j,sum=0,term,fact;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact = 1;
		for(j=1;j<=i;j++){
			term = j;
			fact = fact * term;
		}
		sum = sum + fact;
	}
	printf("Sum = %d",sum);
}
