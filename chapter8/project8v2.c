#include <stdio.h>

int max(int m, int n, int a[m][n]){
  int maxi = 0;
  
  for (int i=0;i<m;i++){
    if(a[i][n]>maxi)
      maxi=a[i][n];
  }
  return maxi;
}

int min(int m, int n, int a[m][n]){
  int mini=10;
  for (int i=0;i<m;i++){
    if(a[i][n]<mini)
      mini=a[i][n];
  }
  return mini;
} 
  
  
int sum(int m, int n, int a[m][n]){
  int suma=0;
  for (int i=0;i<n;i++){
    suma+=a[m][i];
  }
  return suma;  
}

float average(int m, int n, int a[m][n]){
  return (float) sum (m,n,a)/n;  
}

int main(void){
  int max(int m, int n, int a[m][n]);
  int min(int m, int n, int a[m][n]);
  int sum(int m, int n, int a[m][n]);
  float average(int m, int n, int a[m][n]);
  int quiz[5][5];
  printf("Enter quiz results for student1: ");
  scanf("%d %d %d %d %d",&quiz[0][0],&quiz[0][1],&quiz[0][2],&quiz[0][3],&quiz[0][4]);
  printf("Enter quiz results for student2: ");
  scanf("%d %d %d %d %d",&quiz[1][0],&quiz[1][1],&quiz[1][2],&quiz[1][3],&quiz[1][4]);
  printf("Enter quiz results for student3: ");
  scanf("%d %d %d %d %d",&quiz[2][0],&quiz[2][1],&quiz[2][2],&quiz[2][3],&quiz[2][4]);
  printf("Enter quiz results for student4: ");
  scanf("%d %d %d %d %d",&quiz[3][0],&quiz[3][1],&quiz[3][2],&quiz[3][3],&quiz[3][4]);
  printf("Enter quiz results for student5: ");
  scanf("%d %d %d %d %d",&quiz[4][0],&quiz[4][1],&quiz[4][2],&quiz[4][3],&quiz[4][4]);
  printf("\tTotal score\t Average score\n");
  printf("Student1\t%d\t%.2f\n",sum(0,5,quiz), average(0,5,quiz));
  printf("Student2\t%d\t%.2f\n",sum(1,5,quiz), average(1,5,quiz));
  printf("Student3\t%d\t%.2f\n",sum(2,5,quiz), average(2,5,quiz));
  printf("Student4\t%d\t%.2f\n",sum(3,5,quiz), average(3,5,quiz));
  printf("Student5\t%d\t%.2f\n",sum(4,5,quiz), average(4,5,quiz));
  
 
  printf("\t Average score\tHigh score \t low score\n");
  printf("Quiz1\t\t%.2f\t\t%d\t\t%d\n",(float)(quiz[0][0]+quiz[1][0]+quiz[2][0]+quiz[3][0]+quiz[4][0])/5, max(5,0,quiz),min(5,0,quiz));
  printf("Quiz2\t\t%.2f\t\t%d\t\t%d\n",(float)(quiz[0][1]+quiz[1][1]+quiz[2][1]+quiz[3][1]+quiz[4][1])/5, max(5,1,quiz),min(5,1,quiz));
  printf("Quiz3\t\t%.2f\t\t%d\t\t%d\n",(float)(quiz[0][2]+quiz[1][2]+quiz[2][2]+quiz[3][2]+quiz[4][2])/5, max(5,2,quiz),min(5,2,quiz));
  printf("Quiz4\t\t%.2f\t\t%d\t\t%d\n",(float)(quiz[0][3]+quiz[1][3]+quiz[2][3]+quiz[3][3]+quiz[4][3])/5, max(5,3,quiz),min(5,3,quiz));
  printf("Quiz5\t\t%.2f\t\t%d\t\t%d\n",(float)(quiz[0][4]+quiz[1][4]+quiz[2][4]+quiz[3][4]+quiz[4][4])/5, max(5,4,quiz),min(5,4,quiz));
  
  
  return 0;
}








