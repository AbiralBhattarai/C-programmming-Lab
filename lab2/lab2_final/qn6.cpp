#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int a,i;
	printf("enter a number;");
	scanf("%d",&a);
	int original = a;
	int digit3 = a % 10;
	a=a/10;
	int digit2 = a%10;
	a=a/10;
	int digit1 = a;
	int arms = pow(digit1,3)+pow(digit2,3)+pow(digit3,3);
	if(original = arms){
		printf("number is armstrong!");
	}else{
		printf("number is not armstrong!");
	}
}
