#include<stdio.h>
#include<conio.h>
 int main() // print all odd number from 5 to 50.
 {
  int i = 5 ;
  clrscr();
  for ( i = 5 ; i<= 50 ; i++ ){

   if( i % 2 == 0 ){
     continue ;
     }
      printf("%d \n",i);
      }

      getch ();
      return 0;
      }
