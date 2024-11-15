/*
A circular queue is one in which the insertion of a
new element is done at the very first location of the
queue if the last location of the queue is full.
*/

#include <stdio.h>
#include <stdbool.h>

#define SIZE 5

int Queue[SIZE];
int front = -1;
int rear = -1;

bool isFull()
{
    if ((rear + 1) % SIZE == front)
        return true;
    else
        return false;
}

bool isEmpty()
{
    if (front == -1 && rear == -1)
        return true;
    else
        return false;
}

void enqueue(int data)
{
    if (isFull())
        printf("Queue is overflow.\n");

    else if (isEmpty())
    {
        front = rear = 0;
        Queue[rear] = data;
    }

    else
    {
        rear = (rear + 1) % SIZE;
        Queue[rear] = data;
    }
}

void dequeue()
{
    if (isEmpty())
        printf("Queue is underflow.\n");

    else if (front == rear)
    {
        front = rear = -1;
    }

    else
    {
        front = (front + 1) % SIZE;
    }
}

void display()
{
    if (isEmpty())
    {
        printf("Queue is Underflow.");
        return;
    }

    int i = front;
    while (i != rear)
    {
        printf("%d\n", Queue[i]);
        i = (i + 1) % SIZE;
    }

    printf("%d\n", Queue[rear]);
}

int main()
{
    enqueue(76);
    enqueue(87);
    enqueue(90);
    display();
    dequeue();
    dequeue();
    display();
    enqueue(34);
    enqueue(1);
    display();

    return 0;
}
