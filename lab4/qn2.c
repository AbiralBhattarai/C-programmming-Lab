#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,num,i,j,c;
	printf("enter starting number for range;\n ");
	scanf("%d",&a);
	printf("enter ending number for range;\n ");
	scanf("%d",&b);
	printf("Prime numbers between %d and %d are :\n",a,b);
	for(j=a;j<=b;j++){
		c = 0;
		num = j;
		for(i=1;i<=num;i++){
			if(num % i == 0){
				c = c+1;
			}
		}
		if(c == 2){
			printf("%d\t",num);
		}		
	}
	getch();
	return 0;
}
