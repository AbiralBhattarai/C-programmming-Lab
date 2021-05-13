#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main(){
	char a,b;
	fflush(stdin);
	printf("enter a character: ");
	scanf("%c",&a);
	if((a >= 'A') && (a <= 'Z')){
      	printf("%c",tolower(a));
    }else{
        printf("%c",toupper(a));
	};
 	getch();
}
