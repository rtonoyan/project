#include <pthread.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

#ifndef	threadpool.h
#define threadpool.h 1
typedef void (*pullfunction());

typedef struct mard {
    int money;
    pullfunction *topluss;
    pullfunction *tominuss;
} mard;

mard mard1;
pthread_mutex_t Mutex;
pthread_cond_t Cond;

#endif