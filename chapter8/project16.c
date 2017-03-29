#include <stdio.h>
#include <ctype.h>

int main(){
  char letters[26]={0};
  int i=0;
  char ch;
  int is_anagram=0;
  printf("Enter first word : ");
   
  while ((ch=toupper(getchar()))!='\n'){
    letters[ch-'A']+=1;
    }
  printf("Enter second word : ");
  while ((ch=toupper(getchar()))!='\n'){
    letters[ch-'A']-=1;
  }
  
  for (i=0;i<26;i++){
    if (letters[i]!=0){
      is_anagram=0;
      break;    
    }
    else
      is_anagram=1;
  }
  if(is_anagram)
    printf("The words are anagrams!!!");
  else
    printf("The words are not anagrams.");
   
  return 0;  
}

     
           