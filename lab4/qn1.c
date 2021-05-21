#include<stdio.h>
#include<conio.h>
void main(){
	int num;
	printf("enter a number: ");
	scanf("%d",&num);
	if(num%5==0){
		printf("number is divisible by 5\n");
	}else{
		printf("number is not divisible by 5\n");
	}
	if(num%7==0 && num%11!=0){
		printf("number is divisible by 7 but not by 11\n");
	}else if(num%7 !=0 && num%11==0){
		printf("number is divisible by 11 but not by 7\n");
	}else if(num%7 ==0 && num%11==0){
		printf("number divisible by both 7 and 11\n");
	}
	else{
		printf("number is not divisible by both 7 and 11\n");
	}
	getch();
}
