#include<stdio.h>
#include<conio.h>

void swapping(int a,int b)
{
 int temp = a;
 a = b;
 b = temp;
  return;
  }

  int main()
  {
  clrscr();
   int p;
   printf("Enter value of p");
   scanf("%d",&p);

   int q;
   printf("Enter value of q");
   scanf("%d",&q);

    int temp = p;
    p = q;
    q = temp;

   printf("value of a is %d\n",p);
   printf("value of b is %d\n",q);

   getch();
   return 0;
   }

