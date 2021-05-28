#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main(){
	int max,min,num;
	char ch;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("Press Y to continue and any other key to exit.");
	ch = getch();
	ch = toupper(ch);
	min=max=num;
	while(ch == 'Y'){
		system("cls");
		printf("enter a number:");
		scanf("%d",&num);
		if(num>max){
			max = num;
		}else{
			min = num;
		}
		printf("Press Y to continue and other key to exit");
		ch = getch();
		ch = toupper(ch);
	}
	printf("\nHighest= %d and lowest = %d",max,min);
}
