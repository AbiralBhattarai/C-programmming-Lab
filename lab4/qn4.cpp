#include<stdio.h>
#include<conio.h>
int main(){
	int a,b;
	int min;
	int hcf;
	printf("enter a number");
	scanf("%d",&a);
	printf("enter a number");
	scanf("%d",&b);
	if(a<b){
		min = a;
	}else{
		min = b;
	}
	for(int i = 1;i <= min;i++){
		if((a % i == 0)&&(b%i == 0)){
			hcf = i;
		}
	}
	printf("\n hcf = %d ",hcf);
	int lcm = a*b / hcf;
	printf("\n lcm = %d",lcm);
	return 0;	
}
