#include<stdio.h>
//#include<ctype.h>
int main(void){
  float f;
  double d;
  long double ld;
  
  printf("size int : %u, size short :%u, size long : %u, size float : %u,  size double : %u, size long double %u", 
  sizeof(int), sizeof(short), sizeof (long), sizeof (f), sizeof (d), sizeof (ld));
  return 0;
 
  
}