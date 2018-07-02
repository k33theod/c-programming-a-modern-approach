#include <stdio.h>
#include "maxim.h"

int main(void){
  double a, b;
  printf("Enter 2 floats : ");
  scanf("%lf%lf", &a, &b);
  
  printf("Ο μεγαλύτερος είναι %f", maxim(a,b));
  return 0;
  }