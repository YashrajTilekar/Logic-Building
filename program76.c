#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head ,int no)
{
    PNODE newn = NULL;
    newn = (NODE*)malloc(sizeof(NODE));
    
    newn->data = no;
    newn->next = NULL;

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

void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("|%d|->",head->data);
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

void InsertLast(PPNODE head ,int no)
{
    PNODE newn = NULL;
    newn = (NODE*)malloc(sizeof(NODE));
    PNODE temp = NULL;
    
    newn->data = no;
    newn->next = NULL;

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
       temp->next = newn;
    }
}

void InsertAtPos(PPNODE head ,int no ,int pos)
{
    PNODE newn = NULL;
    newn = (NODE*)malloc(sizeof(NODE));

    int size = 0 ,iCnt = 0;
    size = Count(*head);
    PNODE temp = NULL;
    
    newn->data = no;
    newn->next = NULL;

    if( (pos > (size+1)) || (pos < 0))
    {
        printf("Invalid Position\n");
        return;
    }
    else if(pos == 1)
    {
        InsertFirst(head ,no);
    }
    else if(pos == (size+1))
    {
        InsertLast(head,no);
    }
    else
    {
        temp = *head;
        for(iCnt = 1;iCnt < (pos-1) ;iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE head)
{
    PNODE temp = NULL;
    if( *head == NULL)
    {
        return;
    }
    else
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE head)
{
    PNODE temp = NULL;

    if( *head == NULL)
    {
        return;
    }
    else if( (*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = *head;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
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

    InsertLast(&first,150);

    InsertAtPos(&first ,35 ,3);

    //DeleteFirst(&first);

    //DeleteLast(&first);

    Display(first);
    iRet = Count(first);
    printf("Number of Nodes are: %d\n",iRet);

    return 0;
}