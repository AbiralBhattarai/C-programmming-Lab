#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
  int a, b, c, d;
  float root1, root2;
  printf("Enter a, b and c where a*x*x + b*x + c = 0\n");
  scanf("%d%d%d", &a, &b, &c);
  d = b*b - 4*a*c;
  if (d < 0) {
    printf("First root = %f + i%f\n", -b/(double)(2*a), sqrt(-d)/(2*a));
    printf("Second root = %f - i%f\n", -b/(double)(2*a), sqrt(-d)/(2*a));
  }
  else {
    root1 = (-b + sqrt(d))/(2*a);
    root2 = (-b - sqrt(d))/(2*a);
	printf("First root = %f\n", root1);
    printf("Second root = %f\n", root2);
  }
return 0;
}
