#include <stdio.h>
#include<stdbool.h>
int main(void){
  long num;
  int digit;
  bool is_digit[10]={false};
  int digits[10]={0};
  printf("Enter a number : ");
  scanf("%ld",&num);
  do{
    digit=num%10;
    num=num/10;
    if (is_digit[digit]==false)
      is_digit[digit]=true;
    else 
      digits[digit]=1;
  }  while(num!=0);

  printf("Reapeted digits :");
  for (int i =0;i<10;i++){
    if (digits[i]==1)
      printf(" %d",i);
  }
  return 0;
}









