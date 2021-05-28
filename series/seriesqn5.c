#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	int n,i,sum=0,term;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		term = i;
		sum = sum + pow(term,i);
	}
	printf("Sum= %d",sum);
}
