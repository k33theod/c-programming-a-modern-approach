#include <stdio.h>
#include <ctype.h>
int main(){
  char message[80];
  
  int i=0;
  char ch;
  printf("Enter a message to be encrypted : ");
  
  while ((ch=getchar())!='\n'){
    message[i]=ch;
    i++;
    }
  
  int shift=0;
  printf("Enter a shift amount : ");
  scanf("%d",&shift);
  
  printf("Encrypted message : ");
  for(int j=0;j<i;j++){
    ch=message[j];
    if (isalpha(ch)){
      if (islower(ch))
        printf("%c",((ch-'a')+shift)%26+'a');
      else
        printf("%c",((ch-'A')+shift)%26+'A');
      }
    else
      printf("%c",ch);
    
  }
  return 0;  
}

     
           