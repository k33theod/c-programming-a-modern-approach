#include <stdio.h>
#include <ctype.h>

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);
  
void print_magic_square(int n, int magic_square[n][n])
  {
    for (int i=0;i<n;i++){
      for (int j=0;j<n;j++){
        printf("%6d",magic_square[i][j]);
        }
      printf("\n");
      }
  }
  
void create_magic_square(int n, int magic_square[n][n])
{
  int i=0;
  int j=0;
  for (i=0;i<n;i++)
    for (j=0;j<n;j++)
      magic_square[i][j]=0;
  
  i=0;
  j=(int)(n/2);
  magic_square[i][j]=1;
  
  int num=2;
  while(num<=n*n){
    if (i>0 && j<n-1){
      if(magic_square[i-1][j+1]==0){
        i=i-1;
        j=j+1;
        magic_square[i][j]=num;
        num+=1;
      }
      else{
        i+=1;
        magic_square[i][j]=num;
        num+=1;
        }
      }
    else if(i==0 && j<n-1){
      
      if(magic_square[n-1][j+1]==0){
        i=n-1;
        j=j+1;
        magic_square[i][j]=num;
        num+=1;
      }
      else{
        i+=1;
        magic_square[i][j]=num;
        num+=1;
        }
    }
    else if(i==0 && j==n-1){
      if(magic_square[n-1][0]==0){
        i=n-1;
        j=0;
        magic_square[i][j]=num;
        num+=1;
      }
      else{
        i+=1;
        magic_square[i][j]=num;
        num+=1;
        }
    }
    else if(i>0 && j==n-1){
      if(magic_square[i-1][0]==0){
        i=i-1;
        j=0;
        magic_square[i][j]=num;
        num+=1;
      }
      else{
        i+=1;
        magic_square[i][j]=num;
        num+=1;
        }
    } 
  }  
  
  
}

int main(){
  int size=0;
  printf("This program creates a bagic square of a spesified size.\n");
  printf("The size must be an odd number between 1 and 99.\n");
  printf("Enter size of a bagic square : ");  
  scanf("%d",&size);
  int magic[size][size];
  create_magic_square(size, magic);
  print_magic_square(size, magic);
  return 0;  
}

     
           