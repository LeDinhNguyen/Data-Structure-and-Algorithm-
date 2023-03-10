#include "SinglyLinkedList.cpp" 

int findNode(SinglyLinkedListNode *head, int pos) {
    SinglyLinkedListNode *temp = head;
    int count = 0;
    if (pos >= head->size()) return -1;
    else {
        while(temp != nullptr and count < pos) {
            count++;
            temp = temp->next;
        }
        cout << "The value of node in position " << pos << " is " << temp->value << endl;
        return temp->value;
    }
}

int main(){
    // create Node
    SinglyLinkedListNode *one = new SinglyLinkedListNode(1);
    SinglyLinkedListNode *two = new SinglyLinkedListNode(2);
    SinglyLinkedListNode *three = new SinglyLinkedListNode(3);
    SinglyLinkedListNode *four = new SinglyLinkedListNode(4);
    
    // link these Node
    one->next = two;
    two->next = three;
    three->next = four;

    SinglyLinkedListNode *head = one;
    head->printList();

    findNode(head, 3);
    return 0;
}