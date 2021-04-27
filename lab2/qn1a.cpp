#include<stdio.h>
#include<conio.h>
int main(){
	int number,digit1,digit2,digit3;
	printf("Enter 3 digit number:");
	scanf("%d",&number);
	digit1 =  number / 100;
	digit2 = (number % 100)/10;
	digit3 = number % 10;
	int reverse = digit3*100 + digit2*10 + digit1;
	printf("%d",reverse);
	return 0;
}
