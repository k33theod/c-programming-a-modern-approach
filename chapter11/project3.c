#include <stdio.h>
int gcd ( int a, int b );
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
  *reduced_numerator=numerator/gcd(numerator, denominator); 
  *reduced_denominator=denominator/gcd(numerator, denominator);
}

int gcd ( int a, int b )
{
  int c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}

int main(){
  int num1, num2;
  int rnum1,rnum2;
  printf("Enter a fraction : ");
  scanf("%d/%d", &num1,&num2);
  reduce(num1,num2,&rnum1,&rnum2);
  printf("In lowest terms %d/%d", rnum1, rnum2);
  return 0;  
}