#include <iostream>
using namespace std;

/*

head is a reference variable which contaion first node
tail is a reference variable which contaion last node

use these reference variabe reduces the time complexity of our code for N to 0

*/

class Node
{
public:
    int data;
    Node *nextNode;

    // Making a parametrised constructor
    Node(int number)
    {
        this->data = number;
        this->nextNode = NULL;
    }
};

int size;
Node *head = NULL;
Node *tail = NULL;

void printAddresInfo(Node *test_node)
{

    printf("addres of given node        %d\n", test_node);
    printf("addres of data              %d\n", &(test_node->data));
    printf("data                       '%d'\n", (test_node->data));
    printf("addres stored in var        %d\n", test_node->nextNode);
    printf("addres of pointer           %d\n", &(test_node->nextNode));
    cout << endl;
}
void pushFront(int num)
{
    Node *new_node = new Node(num);

    if (head == NULL) // If linked list is empty then store head and tail addr
    {
        head = new_node;
        tail = new_node;
        size++;
        return;
    }

    new_node->nextNode = head;
    head = new_node;
    size++;
}

void printLinkedList()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->nextNode;
    }

    cout << "NULL" << endl;
}

void insert(int num, int index)
// Note to always increase the size of linked list by one
{
    if (index <= size)
    {
        Node *temp = head;
        // Now we will track the index
        for (int i = 1; i < index; i++)
        {
            temp = temp->nextNode;
        }
        Node *new_node = new Node(num);
        new_node->nextNode = temp->nextNode;
        head->nextNode = new_node;
    }

    else
        cout << "index out of range" << endl;
    size++;
}
void pushBack(int num)
{
    Node *new_node = new Node(num);
    if (head == NULL) // If linked list is empty then store head and tail addr
    {
        /* note that we dont link and unlink a node when it we
        create a first node so we terminate function only by init head and tail to
        first node addr dosent do any linkin and un linking task
        same goes for pushfront functin
        */
        head = new_node;
        tail = new_node;
        size++;
        return;
    }
    // Unlinking tail node and linking newly create node
    tail->nextNode = new_node;
    tail = new_node;
    size++;
}
void deleteFromIndex(int index)
{
    

    for (int i = 0; i < index; i++)
    {


    }
    
    
}

void delete_node(int index)
{
    Node *delete_node = head;
    Node *temp;
    for (int i = 0; i < index - 1; i++)
    {
        delete_node = delete_node->nextNode;
    }

    temp = delete_node->nextNode;
    delete_node->nextNode = temp;
}

int main()
{
    /**
    pushFront(23);
    pushFront(2);
    pushFront(3);
    pushFront(4);
    pushFront(5);
    pushFront(6);
    insert(12, 2);
    */
    for (int i = 0; i < 10; i++)
    {
        pushBack(i);
    }
    delete_node(4);

    // pushBack(12);
    // pushBack(43);
    // pushBack(76);

    cout << size << endl;

    printLinkedList();

    return 0;
}