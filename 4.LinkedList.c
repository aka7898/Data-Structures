/*                  
                                         Linked List

A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations.


rather they are linked using pointers. Linked List forms a series of connected nodes, where each node stores 
the data and the address of the next node.

Node Structure: A node in a linked list typically consists of two components:
Data: It holds the actual value or data associated with the node.
Next Pointer: It stores the memory address (reference) of the next node in the sequence.
Head and Tail: The linked list is accessed through the head node, which points to the first node in the list. 
               The last node in the list points to NULL or nullptr, indicating the end of the list. This node is known as the tail node

                                             ADT OF LINKED LIST

MINIMAL REQUIREMENTS
int data;
struct Node*next;

head = (struct node*)malloc(sizeof(struct node))    //here,head is the pointer
*/   

//TRAVERSING IN LINKED LIST
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

int main(){
    struct node *head;
    struct node *second;
    struct node * third;

    //ALLOCATING MEMORY FOR EACH NODES
    head = (struct node*)malloc(size of (struct node));
    second = (struct node*)malloc(size of (struct node));
    third = (struct node*)malloc(size of (struct node));

    //LINKING FIRST AND SECOND NODE
    head-> data = 8;
    head-> next = second;

    //LINKING SECOND AND THIRD NODE
    head->data = 90;
    head-> next = third;

    //TERMINATE THE LIST AT THIRD NODE
    head->data = 38;
    head->next = NULL;
    return 0;
}