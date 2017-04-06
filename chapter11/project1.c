#include<stdio.h>
#include <stdlib.h>

void payment(long int euros, int *fifties, int *twenties, int *tens, int *funfs, int *twos, int *ones)
{
  *fifties=euros/50;
  *twenties=(euros%50)/20;
  *tens=((euros%50)%20)/10;
  *funfs=(((euros%50)%20)%10)/5;
  *twos=((((euros%50)%20)%10)%5)/2;
  *ones=((((euros%50)%20)%10)%5)%2;
}  
int main()
{
  long int euros;
  printf ("Give the total in euros : ");
  scanf("%ld", &euros);
  int fifties, twenties, tens,funfs,twos,ones;
  payment(euros,&fifties, &twenties, &tens, &funfs, &twos, &ones);
  printf("fifties %d, twenties %d, tens %d, funfs %d, twos %d, ones %d",
          fifties, twenties, tens,funfs,twos,ones);
}