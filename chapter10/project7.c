#include <stdio.h>
#include <stdbool.h>

#define MAX_DIGITS 10

const int segments[10][7]={{1,1,1,1,1,1,0},{0,1,1,0,0,0,0},{1,1,0,1,1,0,1},{1,1,1,1,0,0,1},
                           {0,1,1,0,0,1,1},{1,0,1,1,0,1,1},{1,0,1,1,1,1,1},{1,1,1,0,0,0,0},
                           {1,1,1,1,1,1,1},{1,1,1,1,0,1,1}};
                           
char digits[4][4*MAX_DIGITS];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main (void)
{
  clear_digits_array();
  int digit;
  int position=0;
  printf("Enter a number : \n");
  scanf("%1d",&digit);
  do 
  { 
    process_digit(digit,position);
    position+=1;
    scanf("%1d",&digit);
  } while (position<10) ;
  print_digits_array();
  return 0;
}

void clear_digits_array(void)
{
  for (int i=0;i<4;i++)
    for (int j=0;j<4*MAX_DIGITS;j++)
      digits[i][j]=' '; 
}
                           
void process_digit(int digit, int position)
{
  switch (digit)
  {
    case 0:
      digits[0][4*position+1]='_';
      digits[1][4*position]='|';
      digits[1][4*position+2]='|';  
      digits[2][4*position]='|';
      digits[2][4*position+1]='_';
      digits[2][4*position+2]='|'; 
      break;
    case 1:
      digits[1][4*position+2]='|';
      digits[2][4*position+2]='|';
      break;
    case 2:
      digits[0][4*position+1]='_';
      digits[1][4*position+1]='_';
      digits[1][4*position+2]='|';
      digits[2][4*position]='|';
      digits[2][4*position+1]='_'; 
      break;
    case 3:
      digits[0][4*position+1]='_';
      digits[1][4*position+1]='_';
      digits[1][4*position+2]='|';
      digits[2][4*position+1]='_'; 
      digits[2][4*position+2]='|';
      break;
    case 4:
      digits[1][4*position]='|';
      digits[1][4*position+1]='_';
      digits[1][4*position+2]='|';
      digits[2][4*position+2]='|';
      break;
    case 5:
      digits[0][4*position+1]='_';
      digits[1][4*position]='|';
      digits[1][4*position+1]='_';
      digits[2][4*position+1]='_';
      digits[2][4*position+2]='|';
      break;
    case 6:
      digits[0][4*position+1]='_';
      digits[1][4*position]='|';
      digits[1][4*position+1]='_';
      digits[2][4*position]='|';
      digits[2][4*position+1]='_';
      digits[2][4*position+2]='|';
      break;
    case 7:
      digits[0][4*position+1]='_';
      digits[1][4*position+2]='|';
      digits[2][4*position+2]='|';
      break;
    case 8:
      digits[0][4*position+1]='_';
      digits[1][4*position]='|';
      digits[1][4*position+1]='_';
      digits[1][4*position+2]='|';  
      digits[2][4*position]='|';
      digits[2][4*position+1]='_';
      digits[2][4*position+2]='|'; 
      break;
    case 9:
      digits[0][4*position+1]='_';
      digits[1][4*position]='|';
      digits[1][4*position+1]='_';
      digits[1][4*position+2]='|';  
      digits[2][4*position+1]='_';
      digits[2][4*position+2]='|'; 
      break;
  }
}

void print_digits_array(void)
{
  for (int i=0;i<4;i++)
  {
    for (int j=0;j<4*MAX_DIGITS;j++)
    {
      printf("%c",digits[i][j]);
    }
    printf("\n");
  }
}

  
 