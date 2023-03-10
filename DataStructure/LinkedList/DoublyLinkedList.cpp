#include <iostream>
using namespace std;

class DoublyLinkedListNode {
public:
    int value;
    DoublyLinkedListNode *next;
    DoublyLinkedListNode *prev;

    // constructor
    DoublyLinkedListNode(int data) {
        value = data;
    }

    int size() {
        int size = 0;
        DoublyLinkedListNode *head = this;
        while (head != nullptr) {
            size++;
            head = head->next;
        }
        return size;
    }
    void traverse()
    {
        DoublyLinkedListNode *temp = this;
        cout << "Linked List: ";
        while (temp != nullptr)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void reverse()
    {
        DoublyLinkedListNode *temp = this;
        cout << "Linked List: ";
        while (temp != nullptr) 
        {
            cout << temp->value << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

void insertionLast(DoublyLinkedListNode *head, int data) {
    DoublyLinkedListNode *temp = head;
    DoublyLinkedListNode *newNode = new DoublyLinkedListNode(data);
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    newNode->next = nullptr;
    newNode->prev = temp;
    temp->next = newNode;
}

void insertionHead(DoublyLinkedListNode *head, int data) {
    DoublyLinkedListNode *temp = head;
    DoublyLinkedListNode *newNode = new DoublyLinkedListNode(data);
    // temp->next = newNode;
    // newNode->prev = temp;
    // temp = newNode;
    newNode->prev = nullptr;
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}


void deletionLast(DoublyLinkedListNode *tail) {

} 

void deletionHead(DoublyLinkedListNode *head) {

}

int main() {
    // create Node
    DoublyLinkedListNode *one = new DoublyLinkedListNode(1);
    DoublyLinkedListNode *two = new DoublyLinkedListNode(2);
    DoublyLinkedListNode *three = new DoublyLinkedListNode(3);
    DoublyLinkedListNode *four = new DoublyLinkedListNode(4);
    DoublyLinkedListNode *head = one;
    DoublyLinkedListNode *tail = four;

    // link theese Node
    one->prev = nullptr;
    one->next = two;
    two->prev = one;
    two->next = three;
    three->prev = two;
    three->next = four;
    four->prev = three;
    four->next = nullptr;
    cout << "BEFORE" << endl;
    head->traverse();

    // Doubly Linked List function
    insertionLast(head, 5);
    insertionHead(head, 0);
    cout << "AFTER" << endl;
    head->traverse();
    return 0;
}