#include <stdio.h>

int gcd(int num1, int num2){ 
  
  if (num1==0){
    return num2;
  }
  if (num2==0){
    return num1;
  }
  
  int mik, max;
  if (num1<num2){
    mik=num1;
    max=num2;
  }
  else {
    mik=num2;
    max=num1;
  }  
  int rem=1;
  while (rem!=0){
  rem=max%mik;
  max=mik;
  mik=rem;
  }
  return max;
} 

int main(){
  int gcd(int num1, int num2);
  int nom1,denom1,nom2,denom2;
  char ch;
  printf("Make prajis with fractions use '+','-','*','/' between the 2 fractions : ");
  scanf("%d/%d %c %d/%d",&nom1,&denom1,&ch,&nom2,&denom2);
  if(denom1==0 || denom2==0){
    printf ("0 division is not acceptable");
    return 0;
  }
  int nom,denom;
  switch(ch){
    case '+':
      nom=nom1*denom2+nom2*denom1;
      denom=denom1*denom2;
      printf("The result of addition is %d/%d\n",nom,denom);
      break;
    case '-':
      nom=nom1*denom2-nom2*denom1;
      denom=denom1*denom2;
      printf("The result of subtraction is %d/%d\n",nom,denom);
      break;
    case '*':
      nom=nom1*nom2;
      denom=denom1*denom2;
      printf("The result of multiplication is %d/%d\n",nom,denom);
      break;
    case '/':
      nom=nom1*denom2;
      denom=denom1*nom2;
      printf("The result of division is %d/%d\n",nom,denom);
      break;
    default:
      printf("There is an error in prajis try again ");
      return 0;
  }
  
  printf("The result in lowest terms %d/%d", nom/gcd(nom,denom), denom/gcd(nom,denom)); 
  return 0;  
}