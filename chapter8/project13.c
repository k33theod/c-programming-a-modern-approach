#include <stdio.h>
#include<ctype.h>
int main(){
  char s;
  char f;
  int flag=0;
  char last[20];
  printf("Enter a first and last name : ");
  int i =0;
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
      last[i]=s;
      i++;
  }while (s!='\n');
  
  for (int j=0;j<i-1;j++)
    printf("%c", last[j]);
  printf(", %c.", f);  
  return 0;  
}

     
           