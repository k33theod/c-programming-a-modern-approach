#include <stdio.h>
#include<ctype.h>
int main(){
  short hours, minutes;
  char ch;
  printf("Enter a 12 hour time : ");
  scanf("%hd:%hd %c",&hours,&minutes,&ch);
  switch(toupper(ch)){
    case 'A':
      break;
    case 'P':
      hours+=12;
      break;
    default:
      printf("Wrong input!!!");
      return 0;
  }
  
  printf("Equivalent 24-hour time : %02hd:%02hd", hours, minutes); 
  return 0;  
}