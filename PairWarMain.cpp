#include <iostream>
#include <pthread.h>

using namespace std;

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

    pthread_join(mainThread,NULL);

}


