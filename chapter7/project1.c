#include<stdio.h>
#include<limits.h>
#include<math.h>


int main(void){
  int i, n;
  
  printf("\n**************************************\n");
  printf("This program print a table of squares.\n");
  printf("The lenght in bytes for integers in your\
 computer is %d\n", sizeof(i));
  double k =pow(2.0, sizeof(i)*8-1);
  int j=(int)(sqrt(k-1));
  printf("max integer is %d\n", INT_MAX);
  printf("So for numbers bigger than %d you will get wrong results\n", j);
  printf("Enter number of entries in table : ");
  
  scanf("%d",&n);
  getchar();
  //char ch;
  int counter=0;
  for (i=1; i<=n; i++){
    printf("%10d\t%10d\n",i,i*i);
    counter+=1;
    
    if (counter==24){
      printf("Press enter to continue ... ");
      while (getchar()!='\n')
        ;
      counter=0;
    }
  }
  return 0;
  
  
}