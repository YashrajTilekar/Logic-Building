/*Linked -List*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node obj;   //Static Memory Allocation

    struct node *ptr = (struct node*)malloc(sizeof(struct node));   //Dynamic Memory Allocation

    obj.data = 11;
    obj.next = NULL;

    ptr -> data = 11;
    ptr -> next = NULL;

    return 0;
}