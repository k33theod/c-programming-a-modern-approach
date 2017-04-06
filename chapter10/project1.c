#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];

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

void push(char i)
{
  if (is_fool())
    printf("stack_overflow\n");
  else
    contents[top++]=i;
}

char pop(void)
{
  if (is_empty())
  {
    printf("stack_underflow\n");
    return -1;
  }
  else
    return contents[--top];
}
    
int main(void)
{
  char ch;
  printf ("Enter an arithmetic expression with ({[]}] to see if groups sympols are properly nested\n");
  while ((ch=getchar())!='\n')
  {
    if (ch=='(' || ch=='['||ch=='{')
      push(ch);
    else if (ch==']'&& contents[top-1]=='[')
      pop();
    else if (ch==')'&& contents[top-1]=='(')
      pop();
    else if (ch=='}'&& contents[top-1]=='{')
      pop();
  }
  if (is_empty())
    printf ("The arithmetic expression is properly nested");
  else
     printf ("The arithmetic expression is not properly nested");
  return 0;
}