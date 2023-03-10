#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next = nullptr;
    Node(int data)
    {
        value = data;
    }

    int size() {
        int size = 0;
        Node *head = this;
        while (head != nullptr) {
            size++;
            head = head->next;
        }
        return size;
    } 
};

void printList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertionLast(Node *head, int data)
{
    Node *current = head;
    Node *newNode = new Node(data);
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = newNode;
}

void deletionLast(Node *head)
{
    Node *last = head;
    while (last->next->next != nullptr)
    {
        last = last->next;
    }
    last->next = nullptr;
}

void traverse()
{
}
/*
int main()
{
    Node *one = new Node(1);
    Node *two = new Node(2);
    Node *three = new Node(3);

    Node *head = one;
    one->next = two;
    two->next = three;

    cout << "Test case: ";
    printList(head);
    cout << endl;

    cout << "Insertion: ";
    insertionLast(head, 4);
    insertionLast(head, 5);
    printList(head);
    cout << endl;

    cout << "Deletion: ";
    deletionLast(head);
    printList(head);
    cout << endl;

    return 0;
}*/