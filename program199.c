//Singly Linked List

//Delete Nodes with Even Numbers

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data ;
    struct node *next ;
};

typedef struct node NODE ;
typedef struct node * PNODE ;
typedef struct node ** PPNODE ;

void InsertFirst(PPNODE head ,int iNo)
{
    PNODE newn = NULL ;
    newn = (NODE*)malloc(sizeof(NODE)) ;

    newn->data = iNo ;
    newn->next = NULL ;

    if(head == NULL)
    {
        *head = newn ;
    }
    else
    {
        newn->next = *head ;
        *head = newn;
    }
}

void Display(PNODE head)
{
    printf("Elements of Linked-List are : \n");

    while(head != NULL)
    {
        printf("|%d|->",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void EvenDelete(PPNODE head)
{
    PNODE Magcha = NULL;
    PNODE Pudcha = NULL;
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return ;
    }

    if((*head)->next == NULL)
    {
        if((((*head)->data) % 2) == 0)
        {
            free(*head);
            *head  = NULL;
            return;
        }
        else
        {
            return;
        }
    }

    Magcha = *head;
    Pudcha = (*head)->next;

    while(Pudcha != NULL)
    {
        if(((Pudcha->data)%2) == 0)
        {
            temp = Pudcha;
            Magcha->next = Pudcha->next;
            free(temp);
            Pudcha = Magcha->next;
        }
    }
    
}

int main()
{
    PNODE First = NULL ;

    InsertFirst(&First ,50);
    InsertFirst(&First ,20);
    InsertFirst(&First ,28);
    InsertFirst(&First ,6);
    InsertFirst(&First ,22);

    Display(First);

    
    return 0 ;
}