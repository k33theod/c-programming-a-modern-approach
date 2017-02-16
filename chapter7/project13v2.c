#include <stdio.h>
#include<ctype.h>
int main(){
  char ch;
  int words=0;
  int chars=0;
  int flag=0;
  printf("Enter a sentence : ");
  do {
    scanf("%c", &ch);
    if (! isalnum(ch))
      flag=0;
    else if (flag==0){
      chars+=1;
      flag=1;
      words+=1;
      }
    else 
      chars+=1;
  } while (ch!='\n');
  printf("words = %d\nchars=%d\n",words,chars) ; 
  printf("Average word length : %.2f ",(float) chars /words);
  return 0;  
}

 