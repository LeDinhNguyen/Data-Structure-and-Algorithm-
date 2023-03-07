#include <stdlib.h>
#include <iostream>
using namespace std;

#define MAX 10

struct stack
{
    int items[MAX];
    int top;
};

int size(stack *s)
{
    return s->top + 1;
}

void createEmptyStack(stack *s)
{
    s->top = -1;
}

bool isEmpty(stack *s)
{
    if (s->top == -1)
        return true;
    else
        return false;
}

bool isFull(stack *s)
{
    if (s->top == MAX - 1)
        return true;
    else
        return false;
}

void push(stack *s, int newItem)
{
    if (isFull(s))
        cout << "full stack";
    else
    {
        s->top++;
        s->items[s->top] = newItem;
    }
}
void pop(stack *s)
{
    if (isEmpty(s))
        cout << "empty stack";
    else
    {
        cout << "Item popped: " << s->items[s->top] << endl;
        s->top--;
    }
}

void printStack(stack *s)
{
    if (isEmpty(s))
        cout << "[]" << endl;
    else
    {
        for (int i = 0; i <= s->top; i++)
        {
            cout << s->items[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int ch;
    stack *s = (stack *)malloc(sizeof(stack));
    createEmptyStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 110);


    printStack(s);
    size(s);
    
    pop(s);

    return 0;
}
