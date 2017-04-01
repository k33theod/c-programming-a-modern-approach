#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);
void read_word(int counts[26])
{
  int i=0;
  char ch;
  printf("Enter a word : ");
  for (i=0;i<26;i++)
    counts[i]=0;
   
  while ((ch=toupper(getchar()))!='\n'){
    counts[ch-'A']+=1;
    }
}

bool equal_array(int counts1[26], int counts2[26])
{
  int i=0;
  for (i=0;i<26;i++)
    if (counts1[i]!=counts2[i])
      return false;
  return true;
}

int main(){
  int word1[26];
  int word2[26];
  read_word(word1);
  read_word(word2);
   
  if(equal_array(word1,word2))
    printf("The words are anagrams!!!");
  else
    printf("The words are not anagrams.");
   
  return 0;  
}

     
           