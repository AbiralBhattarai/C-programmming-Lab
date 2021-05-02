#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if(a % 5 == 0){
		printf("it is divisible by 5 \n");
	}else{
		printf("It's not divisible by 5'");
	};
	if((a % 7 == 0)&&(a % 11 !=0)){
		printf("It is divisible by 7 but not 11:(");
	};
	
}
