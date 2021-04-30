#include<stdio.h>
#include<conio.h>
int sum(int a,int b);
int div(int a,int b);
int prod(int a,int b);
int sub(int a,int b);
int result;
int main(){
	int num1,num2,ch;
	printf("Enter a number");
	scanf("%d",&num1);
	printf("Enter a number");
	scanf("%d",&num2);
	printf("enter the operation \n(1)addition \n 2)subtraction \n 3)multiplication \n 4)division)");
	scanf("%d",&ch);
	if(ch == 1){
		result = sum(num1,num2);
	}else if(ch == 2){
		result = sub(num1,num2); 
	}else if(ch == 3){
		result = prod(num1,num2);
	}else if(ch == 4){
		result = div(num1,num2);
	}else{
		printf("Wrong option(enter 1/2/3/4)");
	};
	printf("result = %d",result);	
}

int sum(int a, int b){
	int sum = a + b;
	return sum;
};

int prod(int a,int b){
	int prod = a * b;
	return prod;
};
int sub(int a,int b){
	int sub = a - b;
	return sub;
	
};
int div(int a,int b){
	int div = a / b;
	return div;
	
}
