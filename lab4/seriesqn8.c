#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	float n,i,j,sum=0,term,fact,deno;
	printf("Enter the value of n: ");
	scanf("%f",&n);
	for(i=1;i<=n;i++){
		fact = 1;
		deno = i;
		for(j=1;j<=i;j++){
			term = j;
			fact = fact * term;
		}
		sum = sum + pow(i,i)/fact;
	}
	printf("Sum = %.2f",sum);
}
