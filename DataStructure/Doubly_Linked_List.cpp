#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    // contructor
    Node(int dulieu)
    {
        data = dulieu;
    };
    Node *prev;
    Node *next;
};

class DoublyLinkedList
{
public:
    Node *head;

public:
    // contructor
    DoublyLinkedList()
    {
        head = nullptr;
    };

    int size()
    {
        int index = -1;

        while (head != nullptr)
        {
            index++;
        }
        int count = index + 1;
        return count;
    }

    void addFirst(int data)
    {
        Node *newNode = new Node(data);
        if (head->next == nullptr)
        {
            head = newNode;
            newNode->next = nullptr;
            newNode->prev = nullptr;
        }
        else
        {
            newNode->next = head;
            newNode->prev = nullptr;
            head = newNode;
        }
    };
    void addLast(int data)
    {
        Node *newNode = new Node(data);
        Node *temp = head;

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        newNode->prev = temp;
        newNode->next = nullptr;
        temp->next = newNode;
        temp = newNode;
    };
    void insert(int data, int position)
    {
        Node *temp = head;
        int index = 0;

        // check position
        if (position > this->size())
            cout << "Unvalid position" << endl;

        if (position == 0)
            addFirst(data);
        else if (position == this->size())
            addLast(data);
        else
        {

            while (head->next != nullptr && index < position)
            {
                index++;
                temp = temp->next;
            }
            Node *newNode = new Node(data);
            newNode->next = temp->next;
            newNode->prev = temp;

            temp->next->prev = newNode;
            temp->next = newNode;
        }
    }
};

int main()
{
    return 0;
}