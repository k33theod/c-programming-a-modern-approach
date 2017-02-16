#include <stdio.h>
#include<ctype.h>
int main(){
  char ch;
  int vowel_counter=0;
  printf("Enter a sentence : ");
  while ((ch=getchar())!='.'){
    switch(toupper(ch)){
      case 'A':case 'E':case 'I':case 'O':case 'U':
        vowel_counter+=1;
        break;
      default:
        break;
    }   
  }
  printf("your sentence contains %d vowels", vowel_counter); 
  return 0;  
}