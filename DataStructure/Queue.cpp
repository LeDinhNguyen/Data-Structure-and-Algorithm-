#include <iostream>
using namespace std;
#define MAX 10

class Queue
{
private:
    int item[MAX], front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    int size()
    {
        return rear + 1;
    }

    bool isFull()
    {
        if (rear == MAX - 1)
            return true;
        return false;
    }
    bool isEmpty()
    {
        if (rear == -1)
            return true;
        return false;
    }
    int enQueue(int newItem)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
            return -1;
        }
        else
        {
            if (front == -1)
                front++;
            rear++;
            item[rear] = newItem;
        }
        return 1;
    }
    int deQueue()
    {
        int element;
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        element = item[front];
        if (front >= rear)
        {
            front = -1;
            rear = -1;
        }
        else
            front++;

        return element;
    }
    void printQueue()
    {
        if (isEmpty())
            cout << "[]" << endl;
        else
        {
            for (int i = front; i <= rear; i++)
            {
                cout << item[i] << " ";
            }
        }
        cout << endl;
    }
};

int main()
{
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    
    q.deQueue();
    q.printQueue();
    return 0;
}