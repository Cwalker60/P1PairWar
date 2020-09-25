#include <iostream>
#include <pthread.h>

using namespace std;

void *runner(void *param) {
    cout << "I'm Player thread" << endl;
    pthread_exit(0); // Close the thread.
}

int main(int argc, char *argv[]) {

}
