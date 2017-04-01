#include <stdio.h>
float tax_rechner (float income);

float tax_rechner (float income){
  float tax=0;
  if (income<750){    
    tax=income/100.0;
    }
  else if (income<2251){
    tax=7.5+2*(income-750)/100;
    }
  else if (income<3751){
    tax=37.5+3*(income-2250)/100;
    }
  else if (income<5251){
    tax=82.5+4*(income-3750)/100;
    }
  else if (income<7001){
    tax=142.5+5*(income-5250)/100;
    }
  else {
    tax=230.00+6*(income-7000)/100;
    }
  return tax;
}

int main(void){ 
  printf("What is the tax income you have : ");
  float income;
  float tax;
  scanf("%f", &income);
  tax=tax_rechner (income);
  printf("Yout tax is %.2f",tax);
  return 0;
  
  }