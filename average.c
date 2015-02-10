#include "stdio.h"

int main (void){


  int x;
  x = 0;
  int count;
  count = 0;
  int store[10];
  int storeaboveavg[10];
    float avg;
    avg=0;
    float averagetwo;
    averagetwo=0;
    int avg2count;
    avg2count = 0;

    scanf ("%d",&x);

  while (x >= 0 ){
   
   store[count]=x;

    scanf("%d", &x);
    count++;
 } 

  for (int i=0; i<count; i++){
    avg+=store[i];
} 
  avg = avg/count;

  for (int i =0; i<count; i++){
    if (store[i]>avg){
      storeaboveavg[avg2count]=store[i];
      avg2count++;   
 }

}
  for (int i=0;i<avg2count; i++){
    averagetwo+=storeaboveavg[i];
  }
  averagetwo=averagetwo/avg2count;

  printf("the average above average is%f", averagetwo);

 return 0;
}
