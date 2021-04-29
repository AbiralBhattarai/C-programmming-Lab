#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int a;
	printf("enter a number;");
	scanf("%d",&a);
	int rem  = a % 2;
	if(rem == 0){
		printf("number is even!");
	}else{
		printf("number is odd");
	}
}
