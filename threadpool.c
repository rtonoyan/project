#include <pthread.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include "threadpool.h"



void printstatus(int pr,int minpl){
    if(minpl==0){
    printf("Money %d,Procent -%d\n",mard1.money,pr);
    }else{
    printf("Money %d,Procent +%d\n",mard1.money,pr);  
    }
}


void plusprocent(){
  while (1)
  {   
      int ti = rand() % 3;
      sleep(ti);
      pthread_mutex_lock(&Mutex);
      mard1.money  = mard1.money  + mard1.money *5/100;
      pthread_mutex_unlock(&Mutex);
      printstatus(5,1);
      if(mard1.money <1000 || mard1.money >100000){
          return;
      }
  }
}

void minusprocent(){
      while (1)
{
    int t2 = rand() % 2+3;    
      int ti = rand() % 5;
      sleep(ti);
      pthread_mutex_lock(&Mutex);
      mard1.money = mard1.money  - mard1.money *t2/100;
      pthread_mutex_unlock(&Mutex);
      printstatus(t2,0);
      if(mard1.money <1000 || mard1.money >100000){
          return;
      }
} 
}

