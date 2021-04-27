#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int number,digit1,digit2,digit3;
	printf("Enter 3 digit number:");
	scanf("%d",&number);
	int original = number;
	digit1 =  number / 100;
	digit2 = (number % 100)/10;
	digit3 = number % 10;
	int arm = pow(digit1,3) + pow(digit2,3) + pow(digit3,3);
	if(original == arm){
		printf("number is armstrong!");
	}else{
		printf("number is not armstrong!");
	}
	return 0;
}
