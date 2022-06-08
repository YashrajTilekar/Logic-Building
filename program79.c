//Doubly Linked List

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *previous;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("|%d|<=>",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCnt = 0;
    while(head != NULL)
    {
        iCnt++;
        head = head->next;
    }

    return iCnt;
}

void InsertFirst(PPNODE head ,int no)
{
    PNODE newn = NULL;

    newn = (NODE*)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    newn->previous = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}

void InsertLast(PPNODE head ,int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (NODE*)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    newn->previous = NULL; 

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        temp = *head;

        while( (temp->next) != NULL)
        {
            temp = temp->next;
        }

        newn->previous = temp;
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE head)
{
    if(*head == NULL)               //if LL is empty
    {
        return;
    }
    else if((*head)->next == NULL)   // if LL contains one element
    {
        free(*head);
        *head = NULL;
    }
    else                            //if LL contains more than one element
    {
        *head = (*head)->next;
        free((*head)->previous);
        (*head)->previous = NULL;
    }

}

void DeleteLast(PPNODE head)
{
    if(*head == NULL)               //if LL is empty
    {
        return;
    }
    else if((*head)->next == NULL)   // if LL contains one element
    {
        free(*head);
        *head = NULL;
    }
    else                            //if LL contains more than one element
    {
        PNODE temp = NULL;
        temp = *head;

        while((temp->next->next) != NULL)
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE head ,int no ,int pos)
{
    int size = 0;
    size = Count(*head);
    PNODE temp = NULL;

    if( (pos < 0) || (pos > (size + 1)))
    {
        printf("Invalid Position\n");
        return;
    }
    else if(pos == 1)
    {
        InsertFirst(head,no);
    }
    else if(pos == (size+1))
    {
        InsertLast(head,no);
    }
    else
    {
        temp = *head;
        int iCnt = 0;

        PNODE newn = NULL;
        newn = (NODE*)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;
        newn->previous = NULL;
        
        for(iCnt = 1 ;iCnt < (pos-1) ;iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->previous = newn;
        temp->next = newn;
        newn->previous = temp;
    }
}

void DeleteAtPos(PPNODE head ,int pos)
{
    int size = 0;
    size = Count(*head);
    PNODE temp = NULL;

    if( (pos < 0) || (pos > size))
    {
        printf("Invalid Position\n");
        return;
    }
    else if(pos == 1)
    {
        DeleteFirst(head);
    }
    else if(pos == size)
    {
        DeleteLast(head);
    }
    else
    {
        temp = *head;
        int iCnt = 0;
        
        for(iCnt = 1 ;iCnt < (pos-1) ;iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        free(temp->next->previous);
        temp->next->previous = temp;
    }
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertLast(&first,135);

    InsertAtPos(&first,70,4);

    //DeleteFirst(&first);
    //DeleteLast(&first);

    //DeleteAtPos(&first,3);

    Display(first);
    iRet = Count(first);
    printf("Number of Nodes are :%d\n",iRet);

    return 0;
}