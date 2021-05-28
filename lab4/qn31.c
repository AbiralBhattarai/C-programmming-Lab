#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	int low,high,i,num,j,sum;
	printf("enter starting number: ");
	scanf("%d",&low);
	printf("enter ending number: ");
	scanf("%d",&high);
	for(i = low;(i <= high); i++){
			num = i;
			sum = 0;
			for(j=1;j<num;j++){
				if(num%j==0){
					if(j>0){
						sum = sum + j;
					}
				}
			}
			if(i==sum){
				printf("%d\t",i);
			}
	}
}
