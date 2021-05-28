#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int low,high,i,j,num,rem,sum,fact;
	printf("enter starting number: ");
	scanf("%d",&low);
	printf("enter ending number: ");
	scanf("%d",&high);
	for(i=low;i<=high; i++){
			sum=0;
			num = i;
			while(num!=0){
				fact = 1;
				rem = num % 10;
				for(j=1;j<=rem;j++){
					fact = fact*j;
				}
				sum = sum + fact;
				num = num/10;
			}
			if(i == sum){
				printf("%d\t",sum);
			}
	}
	getch();
}
