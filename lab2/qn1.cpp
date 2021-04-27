#include<stdio.h>
#include<conio.h>

int main(){
	int a;
	printf("enter a number: ");
	scanf("%d",&a);
	if(a%2 == 0){
		printf("Number is even!");
	}else if(a%2 == 1){
		printf("Number is odd!");
	}
	else{
		printf("number is zero!");
	}
}
