#include<stdio.h>
#include<conio.h>

int main()
{
 int i ;
  clrscr();
   for( i = 1 ; i <= 10 ; i++){

   if( i == 6){ // here when  i will reach at 6 it will pass this number using continue statement.
    continue;
    }
    printf("%d \n",i);
    }

    getch ();
    return 0;
    }