#include <iostream>
#include "queue2.h"
using namespace std;

void createQueue(Queue &Q){
    Q.head = -1;
    Q.tail = 0;   // TAIL DIAM
}

bool isEmpty(const Queue &Q){
    return Q.head == -1;
}

bool isFull(const Queue &Q){
    return Q.head == 4;   // karena head bergerak
}

void enqueue(Queue &Q, infotype x){
    if(isFull(Q)) return;
    if(isEmpty(Q)){
        Q.head = 0;
        Q.info[0] = x;
    } else {
        Q.head++;
        Q.info[Q.head] = x;
    }
}

infotype dequeue(Queue &Q){
    if(isEmpty(Q)) return -1;

    infotype x = Q.info[Q.tail];
    Q.tail++;

    if(Q.tail > Q.head){
        Q.head = -1;
        Q.tail = 0;
    }

    return x;
}

void printInfo(const Queue &Q){
    if(isEmpty(Q)){
        cout << "-1 - 0  | empty queue\n";
        return;
    }

    cout << Q.head << " - " << Q.tail << "  | ";
    for(int i = Q.tail; i <= Q.head; i++){
        cout << Q.info[i];
        if(i < Q.head) cout << " ";
    }
    cout << "\n";
}
