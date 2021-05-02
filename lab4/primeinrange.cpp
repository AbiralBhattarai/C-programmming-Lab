#include<stdio.h>
#include<conio.h>
int count = 0;
int main(){
	int low,high;
	printf("enter starting number: ");
	scanf("%d",&low);
	printf("enter ending number: ");
	scanf("%d",&high);
	for(int i = low;(i >= low)&&(i <= high); i++){
			int num = i ;
			for(int j = 1;j<=num;j++){
				if(num % j == 0){
					count = count + 1;
				};
			};
			if(count == 2){
				printf("%d",num);
			};
	}
}
