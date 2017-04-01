#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int roll_dice(void);
bool play_game(void); 

int roll_dice(void)
{
  srand((unsigned) time(NULL));
  return (rand()%6)+(rand()%6)+2;
}

bool play_game(void)
{
  int roll;
  int point;
  getchar();
  roll=roll_dice();
  if (roll==7 || roll==11)
  {
    printf ("You rolled %d\n",roll);
    printf ("You win!!!\n");
    return true;
  }
  else if(roll==2 || roll==3 || roll==12)
  {
    printf ("You rolled %d\n",roll);
    printf ("You loose!!!\n");
    return false;
  }
  else
  {
    printf ("You rolled %d\n",roll);
    point=roll;
    printf ("Your point is %d\n",point);
    while (true)
    {
      getchar();
      roll=roll_dice();
      if (roll == point)
      {
        printf ("You rolled %d\n",roll);
        printf ("You win!!!\n");
        return true;
      }
      else if (roll==7)
      {
        printf ("You rolled %d\n",roll);
        printf ("You loose!!!\n");
        return false;
      }
      else
        printf ("You rolled %d\n",roll);
    }
  }
}
int main(void)
{
  int wins=0;
  int loses=0;
  bool result;
  while (true)
  {
    result=play_game();
    if (result)
      wins+=1;
    else
      loses+=1;
    printf("Play again? : ");
    if (toupper(getchar())!='Y')
      break;
  }
  
  printf("Wins : %d, Losses : %d", wins, loses);
  return 0;  
}