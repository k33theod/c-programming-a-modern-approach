#include <stdio.h>
#include<ctype.h>
int main(){
  char s;
  char f;
  int flag=0;
  printf("Enter a first and last name : ");
  do {
    scanf("%c",&f);
    if (isalnum(f)){
      flag=1;
      break;}
  }while (1);
  
  do {
    scanf("%c", &s);
    if (isalnum(s) && flag==1)
      continue;
    else if (! isalnum(s))
      flag=0;
    else
      printf("%c",s);
  }while (s!='\n');
  
  printf(", ");   
  
  printf("%c.",f);
  return 0;  
}

     
           