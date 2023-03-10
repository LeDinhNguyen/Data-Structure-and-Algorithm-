#include <iostream>
using namespace std;

class SinglyLinkedListNode 
{
public:
    int value;
     SinglyLinkedListNode *next = nullptr;
     SinglyLinkedListNode(int data)
    {
        value = data;
    }

    int size() {
        int size = 0;
         SinglyLinkedListNode *head = this;
        while (head != nullptr) {
            size++;
            head = head->next;
        }
        return size;
    } 
    void printList()
        {
            SinglyLinkedListNode *temp = this;
            cout << "Linked List: ";
            while (temp != nullptr)
            {
                cout << temp->value << " ";
                temp = temp->next;
            }
            cout << endl;
    }
};

void printList(SinglyLinkedListNode *head)
{
     SinglyLinkedListNode *temp = head;
    while (temp != nullptr)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertionLast( SinglyLinkedListNode *head, int data)
{
     SinglyLinkedListNode *current = head;
     SinglyLinkedListNode *newNode = new  SinglyLinkedListNode(data);
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = newNode;
}

void deletionLast( SinglyLinkedListNode *head)
{
     SinglyLinkedListNode *last = head;
    while (last->next->next != nullptr)
    {
        last = last->next;
    }
    last->next = nullptr;
}


/*
int main()
{
     SinglyLinkedListNode *one = new  SinglyLinkedListNode(1);
     SinglyLinkedListNode *two = new  SinglyLinkedListNode(2);
     SinglyLinkedListNode *three = new  SinglyLinkedListNode(3);

     SinglyLinkedListNode *head = one;
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