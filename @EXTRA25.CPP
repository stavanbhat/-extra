#include<stdio.h>
#include<conio.h>

 int main()
 {
  int i = 5;
  int *x = &i;
  clrscr();

  printf("%p\n",&i); //"&" prints any int's address...
  printf("%p\n",x);  // here x has a some value which was taken from i's address...
  printf("%d\n",*x); // * means (value at)...
  getch();

  return 0;
  }