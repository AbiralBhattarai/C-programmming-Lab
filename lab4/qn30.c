#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int low,high,i,num,rem,arm,b,c;
	printf("enter starting number: ");
	scanf("%d",&low);
	printf("enter ending number: ");
	scanf("%d",&high);
	for(i = low;(i <= high); i++){
			b = i;
			c=0;
			while(b!=0){
				b = b /10;
				c = c + 1;
			}
			arm=0;
			num = i;
			while(num!=0){
				rem = num%10;
				arm = arm + pow(rem,c);
				num = num/10;
			}
			if(i == arm){
				printf("%d\t",arm);
			}
	}
}
