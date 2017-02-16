#include <stdio.h>
//#include<ctype.h>
int main(){
  char praji;
  float number1, number2, value; 
  printf("Enter an expression : ");
  scanf("%f", &number1);
  do {
    scanf("%c%f", &praji, &number2);
    switch(praji){
      case '+':
        value=number1+number2;
        break;
      case '-':
        value=number1-number2;
        break;
      case '*':
        value=number1*number2;
        break;
      case '/':
        value=number1/number2;
        break;
      default:
        break;
    }
    number1=value;
  } while(praji!='\n');  
  printf("Value of expression : %.2f ", number1);
  return 0;  
}