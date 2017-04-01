#include <stdio.h>

void selection_sort(int n, int a[n]);
void move_to_end(int n,int a[n]);

void selection_sort(int n, int a[n])
{
  if (n==0)
    return;
  move_to_end(n,a);
  selection_sort(n-1,a);
}

void move_to_end(int n,int a[n])
{
  int temp;
  int maxi;
  int pointer=0;
  maxi=a[0];
  for (int i=1;i<n;i++)
    if (a[i]>maxi){
      maxi=a[i];
      pointer=i;
    }
  temp=a[n-1];
  a[n-1]=maxi;
  a[pointer]=temp;
}

int main(){
  int num;
  printf ("How many integers want to sort : ");
  scanf("%d",&num);
  int i=0;
  int arra[num];
  printf("Enter %d integers to be sorted : ",num);
  for (i=0;i<num;i++)
    scanf("%d",&arra[i]);
  selection_sort(num,arra);
  for (i=0;i<num;i++)
    printf("%4d",arra[i]);
  return 0;  
}

     
           