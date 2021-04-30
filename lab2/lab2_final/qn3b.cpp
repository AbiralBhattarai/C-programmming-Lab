#include<stdio.h>
#include<conio.h>
int main(){
	int a,rem;
	printf("enter a number:");
	scanf("%d",&a);
	while(a>=2){
		a = a-2;
	}
	rem = a;
	{(rem==0)?printf("even"):printf("odd");}
}
