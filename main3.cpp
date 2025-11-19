#include <iostream>
#include "queue3.h"   
#include "queue3.cpp"
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
