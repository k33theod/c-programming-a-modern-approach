#include <stdio.h>
#include<ctype.h>
int main(){
  char ch;
  int words=0;
  int chars=0;
  printf("Enter a sentence : ");
  while ((ch=getchar())!='\n')
   {
     if (! isalnum(ch)){
       words+=1;
       }
     else{
       chars+=1;
     }
   }
  printf("words = %d\nchars=%d\n",words+1,chars) ; 
  printf("Average word length : %.2f ",(float) chars /(words+1));
  return 0;  
}