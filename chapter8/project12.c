#include<stdio.h>
#include<ctype.h>
int main(void){
  char ch;
  int value=0;
  int values[]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
  printf("Enter a word : ");
  while ((ch=getchar())!='\n'){
    switch(toupper(ch)){
      case 'A':case 'E':case 'I': case 'L':case 'N':case 'O':case 'R':case 'S':case 'T':case 'U':
        value+=values[(int) toupper(ch)%(int)'A'];
        break;
      case 'D':case 'G':
        value+=values[(int) toupper(ch)%(int)'A'];
        break;
      case 'B':case 'C':case 'M':case 'P':
        value+=values[(int) toupper(ch)%(int)'A'];
        break;
      case 'F':case 'H':case 'V':case 'W':case 'Y':
        value+=values[(int) toupper(ch)%(int)'A'];
        break;
      case 'K':
        value+=values[(int) toupper(ch)%(int)'A'];
        break;
      case 'J':case 'X':
        value+=values[(int) toupper(ch)%(int)'A'];
        break;
      case 'Q':case 'Z':
        value+=values[(int) toupper(ch)%(int)'A'];
        break;
      default:
        value+=0;
        break;
    }
  }
  printf("Scrabble value : %d",value); 
  return 0;
  
  
}