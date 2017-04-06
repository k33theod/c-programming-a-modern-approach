#include<stdio.h>
#include <stdlib.h>

void split_time(long int total_sec, int *hr, int *min, int *sec)
{
  *hr=total_sec/3600;
  *min=(total_sec%3600)/60;
  *sec=(total_sec%3600)%60;
}


int main()
{
  long int total_sec=17598;
  int hr, min, sec;
  split_time(total_sec, &hr, &min, &sec);
  printf("%ld total secs have %d hours %d mins %d secs", total_sec, hr, min ,sec);
  
  return 0;
}