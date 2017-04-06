#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

int get_chr_index(int n, char a[n], char ch);
void read_cards(void);
void analyze_hand(void);
void print_result(void);
//int count(int m, int n, int a[m][n],int b);

char ranks[NUM_RANKS]={'2','3','4','5','6','7','8','9','t','j','q','k','a'};
char suits[NUM_SUITS]={'c','d','h','s'};
bool cards[NUM_RANKS][NUM_SUITS];
bool flush=false;
bool straight= false;
bool four_of_a_kind=false;
bool three_of_a_kind=false;
int paars=0;
bool foul_house=false;

/****************************************************** 
*  Returns the last index of char ch in an array a[n] *
*******************************************************/

int get_chr_index(int n, char a[n], char ch)
{
  for (int i=0;i<n;i++)
  {
    if (a[i]==ch)
      return i;
  }
  return -1;
}

/* int count(int m, int n, int a[m][n],int b)
{ 
  int counter=0;
  for (int i=0;i<m;i++)
    for (int j=0;j<n;j++)
      if (a[i][j]==b)
        counter+=1;
  return counter; 
  
  
}*/

void analyze_hand(void)
{
  int in_hand_cards[5][2];
  int k=0;
  int i=0,j=0;
  for(i=0;i<13;i++)
    for (j=0;j<4;j++)
      if (cards[i][j])
      {
        in_hand_cards[k][0]=i;
        in_hand_cards[k][1]=j;
        k+=1;
      } 
  
  for(i=0;i<5;i++)
  {
    for (j=0;j<2;j++)
    {
      printf("%d ",in_hand_cards[i][j]);
    }
    printf("\n");
  }    
  
  //flush
  int flushs=in_hand_cards[0][1];
  for(i=1;i<5;i++)
  {
    
    if (in_hand_cards[i][1]!=flushs)
    {
      flush=false;
      break;
    }
    flush=true;
  }
  
  //straight
  int straights=in_hand_cards[0][0];
  for(i=1;i<5;i++)
  {
    if (in_hand_cards[i][0]!=(straights+1))
    {
      straight=false;
      break;
    }
    straights+=1;
    straight=true;
  }
  
  //four
  int num_ranks[NUM_RANKS]={0};
  int num_suits[NUM_SUITS]={0};
  for(i=0;i<5;i++)
  {
    num_ranks[in_hand_cards[i][0]]+=1;
    num_suits[in_hand_cards[i][1]]+=1;
  } 
  
  for (i=0;i<NUM_RANKS;i++)
    printf("%d  ",num_ranks[i]);
  printf("\n");
  
  for (i=0;i<NUM_RANKS;i++)
  {
    if (num_ranks[i]==4)
      four_of_a_kind=true;
    if (num_ranks[i]==3)
      three_of_a_kind=true;
    if (num_ranks[i]==2)
      paars+=1;
    if (three_of_a_kind==true && paars==1)
      foul_house=true;
  }
}


void print_result(void)
{
  for(int i=0;i<13;i++)
    for (int j=0;j<4;j++)
      if (cards[i][j])
        printf("%c%c ",ranks[i],suits[j]);
}

void read_cards(void)
{
  int in_hand=0;
  int i=0,j=0;
  char chr1,chr2,ch;
  int index_r=0, index_s=0;
  
  for (i=0;i<NUM_RANKS;i++)
    for (j=0;j<NUM_SUITS;j++)
      cards[i][j]=false;
  
  while (in_hand<NUM_CARDS)
  {
    printf("Enter a card : ");
    scanf("%c%c",&chr1,&chr2);
    while((ch=getchar())!='\n')
      ;
    if ((index_r=get_chr_index(NUM_RANKS,ranks,chr1))==-1)
    {  
      printf("Wrong rank\n");
      continue;
    }
    if ((index_s=get_chr_index(NUM_SUITS,suits,chr2))==-1)
    {
      printf("Wrong suit\n");
      continue;
    }
    
    if (cards[index_r][index_s]==true)
    {
      printf ("you have this card in hand already\n");
    }
    else
    {
      cards[index_r][index_s]=true;
      in_hand+=1;
    }
  }
}

int main(void)
{
  printf ("ranks={'2','3','4','5','6','7','8','9','t','j','q','k','a'}\n");
  printf("suits={'c','d','h','s'}\n");
  read_cards();
  print_result();
  printf("\n");
  analyze_hand();
  if (straight)
    printf("straight ");
  if (flush)
    printf("flush ");
  if (four_of_a_kind)
    printf("four_of_a_kind ");
  
  if (foul_house)
    printf("foul hause");
  else if (three_of_a_kind)
    printf("three_of_a_kind ");
  else if (paars!=0)
    printf("%d paars",paars);
  else 
    printf("high card");
  
  return 0;
}