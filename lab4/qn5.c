#include <stdio.h>n
#include <conio.h>

void main()
{
	int number, min, max;
	char choice;
	printf("Welcome to the program! press any key to continue\n");
do
{
	system("cls");
printf("Enter a number");
scanf("%d", &number);
min=max=number;
if (number>max){
	max=number;
}
else if (number <min){
	min=number;
}
	printf("Y to continue, any other keys to exit :");
	choice= toupper(getch());
	
	
}while(choice=='Y');

printf("\n\nHighest==%d &\n", max);
printf("Lowest==%d", min);
}
