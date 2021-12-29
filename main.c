#include <pthread.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include "threadpool.h"
#include "threadpool.c"
#define THREAD_NUM 4


int main(void){
    pthread_t pool[THREAD_NUM];
    printf("Enter number 1000 to 100000\n");
    scanf("%d",&mard1.money);
    if(mard1.money<1000 || mard1.money >100000){
          return;
      }
    
    mard1.topluss=&plusprocent;
    mard1.tominuss=&minusprocent;
    srand(time(NULL));
    if(pthread_create(&pool, NULL, mard1.topluss, NULL)!=0) {
            printf("Thread creation error\n");
        }
       for (int i = 1; i < THREAD_NUM; i++)
       {
           if(pthread_create(&pool, NULL, mard1.tominuss, NULL)!=0) {
            printf("Thread creation error\n");
        } 
       }
        
    
    for(int i = 0; i < THREAD_NUM; ++i) {
        if(pthread_join(pool[i], NULL) != 0) {
            printf("Thread join error\n");
        }
    }
    pthread_mutex_destroy(&Mutex);
    pthread_cond_destroy(&Cond);
    return 0;
}