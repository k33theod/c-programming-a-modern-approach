#include<stdio.h>

int main(void){
  char ch;
  char i[50];
  int j=0;
  printf("Enter a phone number : ");
  while ((ch=getchar())!='\n'){
    switch(ch){
      case 'A':case 'B':case 'C':
        i[j]='2';
        j++;
        break;
      case 'D':case 'E':case 'F':
        i[j]='3';
        j++;
        break;
      case 'G':case 'H':case 'I':
        i[j]='4';
        j++;
        break;
      case 'J':case 'K':case 'L':
        i[j]='5';
        j++;
        break;
      case 'M':case 'N':case 'O':
        i[j]='6';
        j++;
        break;
      case 'P':case 'R':case 'S':
        i[j]='7';
        j++;
        break;
      case 'T':case 'U':case 'V':
        i[j]='8';
        j++;
        break;
      case 'W':case 'X':case 'Y':
        i[j]='9';
        j++;
        break;
      default:
        i[j]=ch;
        j++;
        break;
    }
  }
  for (int k=0;k<j;k++)
    printf("%c",i[k]); 
  return 0;
  
  
}