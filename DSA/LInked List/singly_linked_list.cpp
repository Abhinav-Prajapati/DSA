#include <iostream>
using namespace std;
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
void printll(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->nextNode;
    }
}
void insert(Node *middle, Node *where)
{
    Node *temp = where->nextNode;
    where->nextNode = middle;
    middle->nextNode = temp;
}
void printAddresInfo(Node *test_node)
{

    printf("addres of given node        %d\n", test_node);
    printf("addres of data              %d\n", &(test_node->data));
    printf("addres stored in var        %d\n", test_node->nextNode);
    printf("addres of pointer           %d\n", &(test_node->nextNode));
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *middle = new Node(89);

    head = new Node(10);
    second = new Node(20);
    third = new Node(30);

    head->nextNode = second;

    second->nextNode = third;

    third->nextNode = NULL;

    printll(head);
    insert(middle, second);
    cout << endl;
    printll(head);
    printAddresInfo(head);
    printAddresInfo(second);

    cout << endl;
    return 0;
}