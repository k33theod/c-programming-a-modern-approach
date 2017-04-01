#include <stdio.h>

double power(int n, double x);
 
double power(int n,double x)
  { 
    if (n==0)
      return 1;
    else if(n%2)
      return x*power(n-1,x);
    else 
      {  
        return power(n/2,x)*power(n/2,x);
      }
    
  }
int main(){
  int n;
  double x;
  printf("Give the n, x :");
  scanf("%d",&n);
  scanf("%lf",&x);
  
  double result;
  result=power(n,x);
  printf("The result is %.2f",result);
  return 0;  
}

     
           