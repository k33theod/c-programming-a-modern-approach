#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int i=0,j=0, l=0, k=0;
  const char capitals[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  char arra[10][10];
  for (i=0;i<10;i++){
    for (j=0;j<10;j++)
      arra[i][j]='.';}
  i=j=k=l=0;
  
  arra[i][j]=capitals[k];
  k+=1;
  srand((unsigned) time(NULL));
  
  while (k<26){  
    if ((j+1<10 && arra[i][j+1]=='.') || (j-1>=0 && arra [i][j-1]=='.') || (i+1<10 && arra[i+1][j]=='.') || (i-1>=0 && arra [i-1][j]=='.')){
      l=rand()%4;
      if(l==0){
        if (j<9 && arra [i][j+1]=='.'){
          j+=1;
          arra[i][j]=capitals[k];
          k+=1;}
        else continue;
      }
      else if (l==1){      
        if (i<9 && arra [i+1][j]=='.'){
          i+=1;
          arra[i][j]=capitals[k];
          k+=1;
          }
      else continue;
      }
      else if (l==2){
        if (j>=1 && arra [i][j-1]=='.'){
          j-=1;
          arra[i][j]=capitals[k];
          k+=1;
          }
        else continue;
      }
      else if (l==3){
        if (i>=1 && arra [i-1][j]=='.'){
          i-=1;
          arra[i][j]=capitals[k];
          k+=1;
          }
        else continue;
      }}
      else break;
    }
  
  for (i=0;i<10;i++){
    for (j=0;j<10;j++){
      printf(" %c ", arra[i][j]);
    }
    printf("\n");
  }
    
  return 0;
}