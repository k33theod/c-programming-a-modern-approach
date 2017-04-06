#include<stdio.h>
#include <stdlib.h>

int *find_largest(int a[], int n)
{
  int max=a[0];
  int max_pointer=0;
  for (int i=1;i<n;i++)
  {
    if (a[i]>max)
    {
      max=a[i];
      max_pointer=i;
    }
  }
  return &a[max_pointer];
}

int main()
{
  int a[9]={2,5,18,23,4,6,7,82,0};
  int *p;
  p=find_largest(a,9);
  printf("The largest of a is %d ",*p);
  return 0;
}