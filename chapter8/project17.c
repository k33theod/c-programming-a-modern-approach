#include <stdio.h>
#include <ctype.h>

int main(){
  
  int size=0;
  printf("This program creates a bagic square of a spesified size.\n");
  printf("The size must be an odd number between 1 and 99.\n");
  printf("Enter size of a bagic square : ");  
  scanf("%d",&size);
  int magic[size][size];
  int i=0;
  int j=0;
  for (i=0;i<size;i++)
    for (j=0;j<size;j++)
      magic[i][j]=0;
  
  i=0;
  j=(int)(size/2);
  magic[i][j]=1;
  
  int num=2;
  while(num<=size*size){
    if (i>0 && j<size-1){
      if(magic[i-1][j+1]==0){
        i=i-1;
        j=j+1;
        magic[i][j]=num;
        num+=1;
      }
      else{
        i+=1;
        magic[i][j]=num;
        num+=1;
        }
      }
    else if(i==0 && j<size-1){
      
      if(magic[size-1][j+1]==0){
        i=size-1;
        j=j+1;
        magic[i][j]=num;
        num+=1;
      }
      else{
        i+=1;
        magic[i][j]=num;
        num+=1;
        }
    }
    else if(i==0 && j==size-1){
      if(magic[size-1][0]==0){
        i=size-1;
        j=0;
        magic[i][j]=num;
        num+=1;
      }
      else{
        i+=1;
        magic[i][j]=num;
        num+=1;
        }
    }
    else if(i>0 && j==size-1){
      if(magic[i-1][0]==0){
        i=i-1;
        j=0;
        magic[i][j]=num;
        num+=1;
      }
      else{
        i+=1;
        magic[i][j]=num;
        num+=1;
        }
    } 
  }  
  for (i=0;i<size;i++){
    for (j=0;j<size;j++){
      printf("%6d",magic[i][j]);
    }
    printf("\n");
  }
  return 0;  
}

     
           