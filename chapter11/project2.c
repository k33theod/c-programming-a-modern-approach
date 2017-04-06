#include <stdio.h>
int departures[]={8*60,9*60+43,11*60+19,12*60+47,14*60,15*60+45,19*60,21*60+45};
int arrivals[]={10*60+16,11*60+52,13*60+31,15*60,16*60+8,17*60+55,21*60+20,23*60+58};

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{ 
  for (int i=0;i<8;i++){
    if (departures[i]>desired_time){
      *departure_time=departures[i];
      break;
    }
  }
  
  for (int j=0;j<8;j++){
    if (arrivals[j]>desired_time){
      *arrival_time=arrivals[j];
      break;
    }
  }
}

int main(void){ 
  
  printf("Departures \t Arivvals\n");
  for (int i=0;i<8;i++){
    printf("%.2d:%.2d \t\t %.2d:%.2d\n", (int) departures[i]/60, (int) departures[i]%60, (int) arrivals[i]/60, (int) arrivals[i]%60 );
  }
  printf("Enter a 24 hour time (hh:mm) : ");
  
  int hour,minutes;
  scanf("%d:%d", &hour,&minutes);
  
  int desired_time;
  desired_time=hour*60+minutes;
  int departure_time, arrival_time;
  find_closest_flight(desired_time, &departure_time, &arrival_time);
  
  printf("Closest departure time is %.2d:%.2d, arrival at %.2d:%.2d \n",
          departure_time/60,departure_time%60,arrival_time/60, arrival_time%60);
  return 0;
}