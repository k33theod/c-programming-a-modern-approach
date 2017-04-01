#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

void generate_random_walk(char walk[10][10])
{
  const char capitals[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  int i=0,j=0, l=0, k=0;
  for (i=0;i<10;i++){
    for (j=0;j<10;j++)
      walk[i][j]='.';}
  
  i=j=k=l=0;
  
  walk[i][j]=capitals[k];
  k+=1;
  srand((unsigned) time(NULL));
  
  while (k<26){  
    if ((j+1<10 && walk[i][j+1]=='.') || (j-1>=0 && walk [i][j-1]=='.') || (i+1<10 && walk[i+1][j]=='.') || (i-1>=0 && walk [i-1][j]=='.')){
      l=rand()%4;
      if(l==0){
        if (j<9 && walk [i][j+1]=='.'){
          j+=1;
          walk[i][j]=capitals[k];
          k+=1;}
        else continue;
      }
      else if (l==1){      
        if (i<9 && walk [i+1][j]=='.'){
          i+=1;
          walk[i][j]=capitals[k];
          k+=1;
          }
      else continue;
      }
      else if (l==2){
        if (j>=1 && walk [i][j-1]=='.'){
          j-=1;
          walk[i][j]=capitals[k];
          k+=1;
          }
        else continue;
      }
      else if (l==3){
        if (i>=1 && walk [i-1][j]=='.'){
          i-=1;
          walk[i][j]=capitals[k];
          k+=1;
          }
        else continue;
      }}
      else break;
    }
}


void print_array(char walk[10][10])
{
  for (int i=0;i<10;i++){
    for (int j=0;j<10;j++){
      printf(" %c ", walk[i][j]);
    }
    printf("\n");
  }
  
  
}

int main(void){
  char walk[10][10];
  generate_random_walk(walk);
  print_array(walk);  
  return 0;
}