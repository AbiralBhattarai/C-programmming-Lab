#include<stdio.h>
#include<conio.h>
int main(){
	int low,high,i,num,j,count;
	printf("enter starting number: ");
	scanf("%d",&low);
	printf("enter ending number: ");
	scanf("%d",&high);
	for(i = low;(i <= high); i++){
			count=0;
			num = i ;
			for(j = 1;j<=num;j++){
				if(num % j == 0){
					count = count + 1;
				};
			};
			if(count == 2){
				printf("%d\t",num);
			};
	}
}
