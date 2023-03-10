#include "SinglyLinkedList.cpp" 

int main(){
    Node *one = new Node(1);
    Node *head = one;

    insertionLast(head, 2);

    printList(head);
    return 0;
}