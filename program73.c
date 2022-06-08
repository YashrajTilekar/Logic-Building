/*Linked -List*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PNODE;

int main()
{
    NODE obj;   //Static Memory Allocation

    NODE *ptr = (NODE*)malloc(sizeof(NODE));   //Dynamic Memory Allocation

    obj.data = 11;
    obj.next = NULL;

    ptr -> data = 11;
    ptr -> next = NULL;

    return 0;
}