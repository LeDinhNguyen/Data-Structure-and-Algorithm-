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
    void printList()
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
};

void insertionLast(DoublyLinkedListNode *head, int data) {
    DoublyLinkedListNode *temp = head;
    DoublyLinkedListNode *newNode = new DoublyLinkedListNode(data);
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertionHead(DoublyLinkedListNode *head, int data) {}

void deletionLast(DoublyLinkedListNode *head) {

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
    head->printList();    

    // Doubly Linked List function
    insertionLast(head, 5);
    cout << "AFTER" << endl;
    head->printList();    

    return 0;
}