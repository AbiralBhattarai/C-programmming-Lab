#include<stdio.h>
#include<conio.h>


int main(){
	int num1,num2,prod;
	printf("Enter 1st number");
	scanf("%d",&num1);
	printf("Enter 2nd number");
	scanf("%d",&num2);
	prod = num1 * num2;
	printf("The product of %d and %d is %d", num1,num2,prod);
	getch();
	return 0;
}
