#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int a,i,rev=0,rem;
	printf("enter a number;");
	scanf("%d",&a);
	while(a != 0){
		rem = a % 10;
		rev = rev * 10 + rem;
		a = a / 10;
	};
	printf("%d",rev);
	
}
