#include <iostream>
#include "queue2.h"   
#include "queue2.cpp"
using namespace std;

int main(){
    cout << "Hello world!\n";
    cout << "---------------------------\n";
    cout << "H - T  : Queue Info\n";
    cout << "---------------------------\n";

    Queue Q;
    createQueue(Q);

    printInfo(Q);
    enqueue(Q,5); printInfo(Q);
    enqueue(Q,2); printInfo(Q);
    enqueue(Q,7); printInfo(Q);
    dequeue(Q);   printInfo(Q);
    dequeue(Q);   printInfo(Q);
    enqueue(Q,4); printInfo(Q);
    dequeue(Q);   printInfo(Q);
    dequeue(Q);   printInfo(Q);

    return 0;
}
