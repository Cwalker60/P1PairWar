/******************************
 * Submitted by: Bailey Hubbard & Charlie Walker
 * CS 4328 - Fall 2020, Texas State University
 * Project 1 POSIX Threads
 * Copyright 2020, all rights reserved
 ******************************/
#include <iostream>
#include <pthread.h>
#include <unordered_set>


using namespace std;
#define NUM_PLAYERS 3

void *Dealer(void *threadid){
    cout << "I'm Dealer thread" << endl;
    pthread_exit(0);
}

void *Player(void *threadid){
    cout << "I'm player thread" << endl;
    pthread_exit(0);
}


/*
* void Runner is the "run" method of the main class.
* This is where the program primarily works, while main just calls, and handles threads..
*/
void *runner(void *param) {
    cout << "I'm thread" << endl;
    pthread_exit(0); // Close the thread
}


/*
* Main Method for our program
*
*/
int main(int argc, char *argv[]) {
    pthread_t mainThread; // Thread identifier
    pthread_attr_t attr; // thread Attributes

    pthread_attr_init(&attr); // set default attributes
    pthread_create(&mainThread, &attr, runner, argv[1]);

    //Player threads-------------------------------------------------
    pthread_t playerThread[NUM_PLAYERS];
    int pc; // Player count
    for (int i = 0; i < NUM_PLAYERS; i++){
       pc = pthread_create(&playerThread[i], NULL, Player, (void *)i);
    }
    //Dealer Threads--------------------------------------------------
    pthread_t DealerThread;
    pthread_create(&DealerThread, &attr, Dealer, argv[1]);

    pthread_join(mainThread,NULL);
    return (0);
}



