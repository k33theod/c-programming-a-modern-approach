#include<stdio.h>
#include <stdlib.h>

void swap(int *p, int *q)
{
  int temp;
  temp=*p;
  *p=*q;
  *q=temp;
}


int main()
{
  int i=5, j=10;
  printf("i=%d and j =%d\n",i,j);
  swap(&i,&j);
  printf("i=%d and j =%d\n",i,j);
  return 0;
}