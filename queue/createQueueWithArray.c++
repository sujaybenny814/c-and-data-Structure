#include <iostream>
// #include <stdio.h>
// #include <stdlib.h>
using namespace std;

// class Queue
// {
// private:
//     int front, rear, size, *Q;

// public:
//     Queue()
//     {
//         front = rear = -1;
//         size = 10;
//         Q = new int[size];
//     }
//     Queue(int size)
//     {
//         front = rear = -1;
//         this->size = size;
//         Q = new int(this->size);
//     }
//     void enqueue(int x);
//     int dequeue();
//     void Display();
// };

// void Queue::enqueue(int x){
//     if(rear == size -1) cout<<"Queue is full";
//     else
//     {
//         rear++;
//         Q[rear] =x;
//     }

// }

// int main(){

// }

//Implement Queue using Array


struct Queue
{
    int size, rear, front;
    int *Q;
};

void createQueue(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->Q = new int[size];
}

void enqueue(struct Queue *q, int elemetToInsert)
{
    if (q->size - 1 == q->rear)
    {
        cout << "Queue is full";
        cout << "\n";

    }
    else
    {
        q->rear++;
        q->Q[q->rear] = elemetToInsert;
    }
}

int deQueue(struct Queue *q){
    int x =-1;
    if(q->front == q->rear){
        cout<<"Queue is empty";
        cout<<"\n";
    }
    else{
        q->front++;
        x = q->Q[q->front];
    }
    return x;

}

void displayQueue(struct Queue q)
{
    for (int i = q.front; i < q.rear; i++)
    {
        cout << q.Q[i];
        cout << "\n";
    }
}

int main()
{
    struct Queue q;
    createQueue(&q, 5);
    enqueue(&q, 7);
    enqueue(&q, 10);
    enqueue(&q, 12);
    enqueue(&q, 12);
    enqueue(&q, 12);
    enqueue(&q, 12);
    enqueue(&q, 12);
    deQueue(&q);
    deQueue(&q);
    deQueue(&q);
    enqueue(&q, 12);
    displayQueue(q);
    return 0;
}