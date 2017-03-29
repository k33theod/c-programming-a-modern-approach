#include <stdio.h>

int main(){
  char sentence[80]={0};
  char ch, term;
  int i =0;
  printf("Enter a sentence : ");
  ch=getchar();
  while(ch!='.' && ch!='?' && ch!='!' ){
    sentence[i]=ch;
    i++;
    ch=getchar();
  }
  term=ch;
  int deiktis=i;
  for (i=i-1;i>=0;i--){
    if (sentence[i]==' '){
      for (int k=i+1;k<deiktis;k++){
        printf("%c",sentence[k]);
        }
        printf(" ");
        deiktis=i;
        }}
  for(i=0;i<80;i++)
    if (sentence[i]!=' ')
      printf("%c",sentence[i]);
    else break;
  printf("%c",term);
  return 0;  
}

     
           