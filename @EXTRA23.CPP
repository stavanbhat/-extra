#include<stdio.h>
#include<conio.h>

 int add(int a,int b)
 {
  return a+b;
  }

  int minus(int p, int q)
  {
   return p - q ;
   }

  int main()
  {
  clrscr();
  int a;
   printf("Enter a\n");
   scanf("%d",&a);
	int b;
   printf("Enter b\n");
   scanf("%d",&b);

   int sum =  add(a,b);
   printf("sum  %d\n = %d",sum);

   int minn = minus(a,b);
   printf("minus  %d\n = %d",minn);

   getch();
   return 0;
   }