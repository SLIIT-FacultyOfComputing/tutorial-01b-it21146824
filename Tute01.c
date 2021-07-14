/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float mark1 , mark2 , tot , avg;//variables

   //get input from the user
  printf("ente the mark 1 :");
  scanf("%f" , &mark1);

   //get input from the user
  printf("ente the mark 2 :");
  scanf("%f" , &mark2);

  calculation of the total
  tot = mark1 + mark2;

  calculation of the average
  avg = tot /2 ;

  printf("your average is %.2f" , avg);//output

  
  return 0;
}

