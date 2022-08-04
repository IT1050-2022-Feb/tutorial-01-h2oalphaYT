/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main(void)
{
  int num1 , num2 ,tot ;
  float avg ;

  printf("enter to the num1 : ");
  scanf("%d" , &num1) ;

  printf("enter to the num2 : ");
  scanf("%d" , &num2) ;

   tot = num1 + num2  ;  //calculation
   avg = tot / 2.0 ;
   
  printf("avarage is %.2f" , avg) ;

  
  
  return 0;
}

