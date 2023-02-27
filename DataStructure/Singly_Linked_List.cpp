#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;

	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

void showLinkedList(Node *head)
{
	cout << "\t-------------\n";
	cout << "\t";
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << "\n\t-------------\n";
}

int size(Node *head)
{
	int count = 0;
	while (head != nullptr)
	{
		++count;
		head = head->next;
	}
	return count;
};

// Check empt linked list
bool isEmpty(Node *&head)
{
	return head == NULL;
};

void insertHead(Node *&head, int data)
{
	Node *new_node = new Node(data);
	if (head == NULL)
	{
		head = new_node;
	}
	else
	{
		new_node->next = head;
		head = new_node;
	}
}

void insertTail(Node *&head, int data)
{
	Node *new_node = new Node(data);

	if (head == NULL)
	{
		head = new_node;
	}
	else
	{
		Node *tail = head; // khong duoc dung head de duyet
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new_node;
	}
}

void Insertion(Node *&head, int data, int position)
{
	Node *new_node = new Node(data);
	Node *temp = head;
	int n = size(head);

	if (position < 0 || position > n + 1)
	{
		cout << "Unvalid position" << endl;
	}
	if (position == 1)
	{
		insertHead(head, data);
		return;
	}
	else if (position == n + 1)
	{
		insertTail(head, data);
		return;
	}

	if (head == NULL)
	{
		cout << "The given node cannot be NULL!" << endl;
	};

	for (int i = 1; i < position - 1; i++)
	{
		temp = temp->next;
	}

	new_node->next = temp->next;
	temp->next = new_node;
};

void deleteHead(Node *&head)
{
	if (head == NULL)
		return;
	head = head->next;
};

void deleteTail(Node *&head)
{
	if (head == NULL)
		return;

	Node *temp = NULL, *tail = head;

	while (tail->next != NULL)
	{
		temp = tail;
		tail = tail->next;
	}
	if (temp == NULL)
		head = NULL;
	else
		temp->next = NULL;
};

void Deletion(Node *&head, int position)
{
	int n = size(head);
	Node *temp = NULL, *tail = head;
	if (position <= 0 || position > n)
		cout << "Unvalid position!" << endl;
	if (head == NULL)
	{
		cout << "Empty linked list" << endl;
		return;
	}

	for (int i = 1; i <= position - 1; i++)
	{
		temp = tail;
		tail = tail->next;
	}
	temp->next = tail->next;
	tail->next = NULL;
};

int main()
{
	// create and assign data to node
	Node *head;
	Node *one = new Node(1);
	Node *two = new Node(2);
	Node *three = new Node(3);

	// connect nodes
	head = one;
	one->next = two;
	two->next = three;
	three->next = NULL;

	cout << "HEAD: \n";
	showLinkedList(head);

	Node *ins = one;
	Node *del = one;

	// Insertion
	cout << "INSERTION: \n";
	cout << "- before: " << endl;
	showLinkedList(ins);
	// insert position = 2
	Insertion(ins, 4, 4);
	// insert head
	insertHead(ins, 5);
	// insert tail
	insertTail(ins, 6);
	cout << "- after: " << endl;
	showLinkedList(ins);

	// Deletion
	cout << "DELETION: \n";
	cout << "- before: " << endl;
	showLinkedList(del);
	// delete with position
	Deletion(del, 3);
	// delete first node
	deleteHead(del);
	// delete last node
	deleteTail(del);
	cout << "- after: " << endl;
	showLinkedList(del);

	return 0;
}
