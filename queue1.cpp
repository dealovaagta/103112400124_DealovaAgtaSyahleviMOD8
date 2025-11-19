#include <iostream>
#include "queue1.h"
using namespace std;

void createQueue(Queue &Q){
    Q.head = -1;
    Q.tail = -1;
}

bool isEmpty(const Queue &Q){
    return Q.tail == -1;
}

bool isFull(const Queue &Q){
    return Q.tail == 4;
}

// HEAD DIAM, TAIL BERGERAK
void enqueue(Queue &Q, infotype x){
    if(isFull(Q)) return;

    if(isEmpty(Q)){
        Q.head = Q.tail = 0;
    } else {
        Q.tail++;
    }
    Q.info[Q.tail] = x;
}

// DEQUEUE MENGGESER DATA KE KIRI
infotype dequeue(Queue &Q){
    if(isEmpty(Q)) return -1;

    infotype x = Q.info[Q.head];

    // geser semua elemen ke kiri
    for(int i = 0; i < Q.tail; i++){
        Q.info[i] = Q.info[i+1];
    }

    Q.tail--;

    if(Q.tail < 0){
        Q.head = Q.tail = -1;
    }

    return x;
}

// PRINT SAMA PERSIS DENGAN GAMBAR
void printInfo(const Queue &Q){
    if(isEmpty(Q)){
        cout << "-1 - -1  | empty queue\n";
        return;
    }

    cout << Q.head << " - " << Q.tail << "  | ";

    for(int i = 0; i <= Q.tail; i++){
        cout << Q.info[i];
        if(i < Q.tail) cout << " ";
    }
    cout << "\n";
}
