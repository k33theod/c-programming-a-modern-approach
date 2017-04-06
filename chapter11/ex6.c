#include<stdio.h>
#include <stdlib.h>

void find_two_largest(int a[], int n, int *first, int *second)
{
  *first=*second=a[0];
  for (int i=1;i<n;i++)
  {
    if (a[i]>*first)
      *first=a[i];
  }
  
  for (int i=1;i<n;i++)
  {
    if (a[i]>*second && a[i]<*first)
      *second=a[i];
  }
  
}


int main()
{
  int a[9]={2,5,18,23,4,6,7,82,0};
  int largest, second_largest;
  find_two_largest(a,9,&largest,&second_largest);
  printf("Two largests of a %d  %d ",largest , second_largest );
  
  return 0;
}