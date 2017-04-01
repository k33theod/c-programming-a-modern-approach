#include <stdio.h>

double poly(double x);
 
double poly(double x)
  {
    double result;
    result=3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;
    return result;
  }
  
int main(){
  double x;
  printf("Give the value of x for 3*x^5+2*x^4-5*x^3-x^2+7*x-6 : ");
  scanf("%lf",&x);
  double result;
  result=poly(x);
  printf("The result is %.4f",result);
  return 0;  
}

     
           