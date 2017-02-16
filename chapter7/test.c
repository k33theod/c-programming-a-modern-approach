#include <stdio.h>
#include<ctype.h>
#include<math.h>
int main(){
  //char sch ;
  char c;
  int a;
  short b;
  long d;
  long long e;
  float f;
  double g;
  long double i;
  
  //scanf("%c", &sch);
  printf("char %d bytes, int %d bytes, short %d bytes, long %d bytes, long long %d bytes, float %d bytes, double %d bytes, long double %d bytes\n",sizeof(c), sizeof(a), sizeof(b), sizeof(d), sizeof(e), sizeof(f), sizeof(g), sizeof(i));
  printf("2**32=%f",pow(2.0,31.0));
  return 0;  
}

