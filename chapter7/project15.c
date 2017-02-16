#include <stdio.h>
//#include<ctype.h>
int main(){
  int n;
  double f=1;
  printf("Enter a possitive integer : ");
  scanf("%d",&n);
  for (int i=1;i<=n;i++){
    f = f*i;
  }
  printf("Factorial of %d : %.0f ",n, f);
  return 0;  
}

 