#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100
//STACK
int contents[STACK_SIZE];
int top=0;

void make_empty(void)
{
  top=0;
}

bool is_empty(void)
{
  return top==0;
}

bool is_fool(void)
{
  return top==STACK_SIZE;
}

void push(int i)
{
  if (is_fool())
    printf("stack_overflow\n");
  else
    contents[top++]=i;
}

int pop(void)
{
  if (is_empty())
  {
    printf("stack_underflow\n");
    return -1;
  }
  else
    return contents[--top];
}
//END OF STACK

int get_chr_index(int n, char a[n], char ch)
{
  for (int i=0;i<n;i++)
  {
    if (a[i]==ch)
      return i;
  }
  return -1;
}

int main(void)
{
  int op1,op2;
  char ch;
  int result=0;
  
  char operators[5]={'+','-','*','/','='};
  char operands[10]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  
  printf ("Enter an RPN (Reverse Polish Notation) expression :");
  scanf(" %c",&ch);  
  do
  {
    
    if ((get_chr_index(10,operands,ch))!=-1)
      push((int) ch - (int) '0');
    
    else if ((get_chr_index(5,operators,ch))!=-1)
      switch(ch)
      {
        case '+':
          op1 = pop();
          op2 = pop();
          result = op1+op2;
          push (result);
          break;
        case '-':
          op1 = pop();
          op2 = pop();
          result = op1-op2;
          push (result);
          break;
        case '*':
          op1 = pop();
          op2 = pop();
          result = op1*op2;
          push (result);
          break;
        case '/':
          op1 = pop();
          op2 = pop();
          result = op1/op2;
          push (result);
          break;
        case '=':
          result = pop();
      }
      scanf(" %c",&ch);
    } while (ch!='z');
    
  printf("Value of expression : %d", result);
  return 0;
}