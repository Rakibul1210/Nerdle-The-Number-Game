
#include <bits/stdc++.h>

using namespace std;

typedef struct node Node;

struct node{
    int data;   //contains the value or data
    Node *next; //reference to the next node
};


//Linked List functions...
Node *create_node(Node *next,int value);

//Stack creating functions...
Node *createLinkedList(Node *head);
// Node adding function
Node *addNewNode(Node *head, int value);

//Node removing function...
Node *removeNode(Node *head);

Node *create_node(Node *next,int value)
{
    Node *new_node;
    new_node = (Node *) malloc(sizeof(node));
    if(new_node == NULL)
    {
        cout<<"Error creating node."<<endl;
        exit(1);
    }

    new_node->data = value;
    new_node->next = next;

    return new_node;

}
Node *createLinkedList(Node *head)
{
    Node *new_node;

    new_node = create_node(NULL, -1);
    new_node->next = NULL;

    return new_node;

}

Node *addNewNode(Node *head, int value)
{
    Node *new_node;

    new_node = create_node(NULL, value);
    new_node->next = head;

    //new_node = create_node(head, value);

    return new_node;

}

Node *removeNode(Node *head, Node *node_to_be_removed)
{
    if(head == node_to_be_removed)
    {
        head = node_to_be_removed->next;
        free(node_to_be_removed);
        return head;
    }

}


