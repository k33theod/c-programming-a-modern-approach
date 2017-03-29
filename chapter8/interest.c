#include <stdio.h>

int main(void){
  int rate;
  int years;
  
  double amount =100.0;
  double a[5];
  printf("Give the rate : ");
  scanf("%d",&rate);
  printf("Give the number of years :");
  scanf("%d",&years);
  printf("Years");
  for (int i=rate; i<rate+5 ; i++){
    printf("\t%d%%",i);
  }
  printf("\n");
  for (int i =0;i<5;i++)
    a[i]=amount;
  //The first year the amount becomes amount+rate*amount/100
  //if we have more years 
  //the amount becomes 100+
  for (int i =1;i<=years; i++){
    printf("%3d",i);
    for (int i=0;i<5;i++){
      a[i]+=(rate+i)/100.0*a[i];
      printf("\t%.2f",a[i]);
      
    }  
    printf("\n");
    amount=amount + (amount*rate/100.0);
  }
  
  
  
  
}