#include "SinglyLinkedList.cpp" 

int findNode(Node *head, int pos) {
    Node *temp = head;
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
    Node *one = new Node(1);
    Node *two = new Node(2);
    Node *three = new Node(3);
    Node *four = new Node(4);
    
    // link these Node
    one->next = two;
    two->next = three;
    three->next = four;

    Node *head = one;

    findNode(head, 3);
    return 0;
}