/*
**This queue is insert(Enqueue) from the rear and delete (dequeue) from the front
*/

#include <stdbool.h>

#define SIZE 10

int queue[SIZE];
int front = -1;
int rear = -1;

bool isFull()
{
    if (rear == SIZE - 1)
        ret#include <stdio.h>
urn true;

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

void enqueue(int term)
{
    if (isFull())
        printf("Queue is Full.");

    else if (front == -1 && rear == -1)
    {
        front = rear = 0;

        queue[rear] = term;
    }
    else
    {
        rear++;
        queue[rear] = term;
    }
}

void dequeue()
{
    if (isEmpty())
        printf("Queue is Empty.");

    else if (front == rear)
    {
        front = rear = -1;
    }

    else
    {
        front++;
    }
}

void display()
{

    for (int i = front; i <= rear; i++)
    {
        printf("%d", queue[i]);
        printf("\n");
    }
}

int main()
{
    enqueue(20);
    enqueue(90);
    display();
    dequeue();
    display();
    enqueue(45);
    display();
    dequeue();
    dequeue();
    dequeue();
    
    return 0;
}