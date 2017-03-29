#include <stdio.h>

int main(void){ 
  int departures[]={8*60,9*60+43,11*60+19,12*60+47,14*60,15*60+45,19*60,21*60+45};
  int arrivals[]={10*60+16,11*60+52,13*60+31,15*60,16*60+8,17*60+55,21*60+20,23*60+58};
  printf("Departures \t Arivvals\n");
  for (int i=0;i<8;i++){
    printf("%.2d:%.2d \t\t %.2d:%.2d\n", (int) departures[i]/60, (int) departures[i]%60, (int) arrivals[i]/60, (int) arrivals[i]%60 );
  }
  printf("Enter a 24 hour time (hh:mm) : ");
  
  int hour,minutes;
  scanf("%d:%d", &hour,&minutes);
  
  int total_mins;
  total_mins=hour*60+minutes;
  
  int next_dep=0, next_ariv=0;
  
  for (int i=0;i<8;i++){
    if (departures[i]>total_mins){
      next_dep=departures[i];
      break;
    }
  }
  
  for (int j=0;j<8;j++){
    if (arrivals[j]>total_mins){
      next_ariv=arrivals[j];
      break;
    }
  }
  printf("Closest departure time is %d:%d, arriving at %d:%d \n",next_dep/60,next_dep%60,next_ariv/60, next_ariv%60);
  return 0;
}