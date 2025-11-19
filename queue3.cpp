#include <iostream>
#include "queue3.h"
using namespace std;

void createQueue(Queue &Q){
    Q.head = -1;
    Q.tail = -1;
}

bool isEmpty(const Queue &Q){
    return Q.head == -1;
}

bool isFull(const Queue &Q){
    return ((Q.tail + 1) % 5) == Q.head;
}

void enqueue(Queue &Q, infotype x){
    if(isFull(Q)) return;

    if(isEmpty(Q)){
        Q.head = Q.tail = 0;
    } else {
        Q.tail = (Q.tail + 1) % 5;
    }
    Q.info[Q.tail] = x;
}

infotype dequeue(Queue &Q){
    if(isEmpty(Q)) return -1;

    infotype x = Q.info[Q.head];

    if(Q.head == Q.tail){
        Q.head = Q.tail = -1;
    } else {
        Q.head = (Q.head + 1) % 5;
    }

    return x;
}

void printInfo(const Queue &Q){
    if(isEmpty(Q)){
        cout << "-1 - -1  | empty queue\n";
        return;
    }

    cout << Q.head << " - " << Q.tail << "  | ";

    int i = Q.head;
    while(true){
        cout << Q.info[i];
        if(i == Q.tail) break;
        cout << " ";
        i = (i + 1) % 5;
    }
    cout << "\n";
}
