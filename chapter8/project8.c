#include <stdio.h>
//#include<stdbool.h>

/* int max(int a[int n]){
  int maxi=a[0];
  for (int i=1;i<n;i++){
    if(a[i]>maxi)
      maxi=a[i];
  }
  return maxi;
}

int min(int a[int n]){
  int mmini=a[0];
  for (int i=1;i<n;i++){
    if(a[i]<mini)
      mini=a[i];
  }
  return mini;
} */

int main(void){
  //int max(int a[int n]);
  //int min(int a[int n]);
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
  printf("Student1\t%d\t%.2f\n",quiz[0][0]+quiz[0][1]+quiz[0][2]+quiz[0][3]+quiz[0][4],(float) (quiz[0][0]+quiz[0][1]+quiz[0][2]+quiz[0][3]+quiz[0][4])/5);
  printf("Student2\t%d\t%.2f\n",quiz[1][0]+quiz[1][1]+quiz[1][2]+quiz[1][3]+quiz[1][4], (float)(quiz[1][0]+quiz[1][1]+quiz[1][2]+quiz[1][3]+quiz[1][4])/5);
  printf("Student3\t%d\t%.2f\n",quiz[2][0]+quiz[2][1]+quiz[2][2]+quiz[2][3]+quiz[2][4], (float)(quiz[2][0]+quiz[2][1]+quiz[2][2]+quiz[2][3]+quiz[2][4])/5);
  printf("Student4\t%d\t%.2f\n",quiz[3][0]+quiz[3][1]+quiz[3][2]+quiz[3][3]+quiz[3][4], (float)(quiz[3][0]+quiz[3][1]+quiz[3][2]+quiz[3][3]+quiz[3][4])/5);
  printf("Student5\t%d\t%.2f\n",quiz[4][0]+quiz[4][1]+quiz[4][2]+quiz[4][3]+quiz[4][4], (float)(quiz[4][0]+quiz[4][1]+quiz[4][2]+quiz[4][3]+quiz[4][4])/5);
  
  int maxq1=quiz[0][0];
  for (int i=1;i<5;i++){
    if (quiz[i][0]>maxq1)
      maxq1=quiz[i][0];
    }
  
  int maxq2=quiz[0][1];
  for (int i=1;i<5;i++){
    if (quiz[i][1]>maxq2)
      maxq2=quiz[i][1];
  }
  
  int maxq3=quiz[0][2];
  for (int i=1;i<5;i++){
    if (quiz[i][2]>maxq3)
      maxq3=quiz[i][2];
  }
  
  int maxq4=quiz[0][3];
  for (int i=1;i<5;i++){
    if (quiz[i][3]>maxq4)
      maxq4=quiz[i][3];
  }
    
  int maxq5=quiz[0][4];
  for (int i=1;i<5;i++){
    if (quiz[i][4]>maxq5)
      maxq5=quiz[i][4];
  }
  
  int minq1=quiz[0][0];
  for (int i=1;i<5;i++){
    if (quiz[i][0]<minq1)
      minq1=quiz[i][0];
  }
  
  int minq2=quiz[0][1];
  for (int i=1;i<5;i++){
    if (quiz[i][1]<minq2)
      minq2=quiz[i][1];
  }
  
  int minq3=quiz[0][2];
  for (int i=1;i<5;i++){
    if (quiz[i][2]<minq3)
      minq3=quiz[i][2];
  }
  
  int minq4=quiz[0][3];
  for (int i=1;i<5;i++){
    if (quiz[i][3]<minq4)
      minq4=quiz[i][3];
  }
  
  int minq5=quiz[0][4];
  for (int i=1;i<5;i++){
    if (quiz[i][4]<minq5)
      minq5=quiz[i][4];  
  }
  
  printf("\t Average score\tHigh score \t low score\n");
  printf("Quiz1\t%.2f\t%d\t\t%d\n",(float)(quiz[0][0]+quiz[1][0]+quiz[2][0]+quiz[3][0]+quiz[4][0])/5, maxq1,minq1);
  printf("Quiz2\t%.2f\t%d\t\t%d\n",(float)(quiz[0][1]+quiz[1][1]+quiz[2][1]+quiz[3][1]+quiz[4][1])/5, maxq2,minq2);
  printf("Quiz3\t%.2f\t%d\t\t%d\n",(float)(quiz[0][2]+quiz[1][2]+quiz[2][2]+quiz[3][2]+quiz[4][2])/5, maxq3,minq3);
  printf("Quiz4\t%.2f\t%d\t\t%d\n",(float)(quiz[0][3]+quiz[1][3]+quiz[2][3]+quiz[3][3]+quiz[4][3])/5, maxq4,minq4);
  printf("Quiz5\t%.2f\t%d\t\t%d\n",(float)(quiz[0][4]+quiz[1][4]+quiz[2][4]+quiz[3][4]+quiz[4][4])/5, maxq5,minq5);
  
  
  return 0;
}








