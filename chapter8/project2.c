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
    if (is_digit[digit]==false){
      is_digit[digit]=true;
      digits[digit]+=1;
    }
    else 
      digits[digit]+=1;
  }  while(num!=0);

  printf("Digit     :\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\n");
  printf("Occurences:");
  for (int i =0;i<10;i++){
    printf("\t%d",digits[i]);
  }
  return 0;
}









