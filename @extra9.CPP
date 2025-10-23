#include<stdio.h>
#include<conio.h>
 int main()
 {
  int i = 1;
  int j = 1;
  int k = 1;
  int l = 1;
  clrscr();


      printf("%d \n",i++); // use then increment.
      printf("%d \n",i);

      printf("%d \n",++j); //increase then use.
      printf("%d \n",j);

      printf("%d \n",k--); //use then decrease.
      printf("%d \n",k);

      printf("%d \n",--l); //decrease then use.
      printf("%d \n",l);
      getch ();
      return 0;
      }