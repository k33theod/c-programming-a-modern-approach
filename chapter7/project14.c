//Square root with Newtons method 
#include <stdio.h>
#include<math.h>
//#include<ctype.h>
int main(){
  double num, sqr, newsqr, diff; 
  printf("Enter a possitive number : ");
  scanf("%lf", &num);
  sqr=1;
  newsqr=num;
  do {
    sqr=(sqr+(num/sqr))/2;
    diff=fabs(sqr-newsqr);
    newsqr=sqr;
        
  } while( diff > 0.00001 );  
  printf("Square root  : %.15f ", sqr);
  return 0;  
}