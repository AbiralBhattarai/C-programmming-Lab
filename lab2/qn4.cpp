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
	int rev = digit3*100 + digit2*10 + digit1;
	if(original == rev){
		printf("number is palindrome!");
	}else{
		printf("number is not palindrome!");
	}
	return 0;
}
