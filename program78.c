#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

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

void InsertFirst(PPNODE head ,int no)
{
    PNODE newn = NULL;
    newn = (NODE*)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)     // LL is Empty
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}

void InserLast(PPNODE head ,int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (NODE*)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)     // LL is Empty
    {
        *head = newn;
    }
    else
    {
        temp = *head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void InsertAtPos(PPNODE head ,int no ,int pos)
{
    int size = 0;
    size = Count(*head);
    PNODE temp = NULL;

    if((pos > (size + 1)) || (pos < 0) )
    {
        printf("Invalid Position\n");
        return;
    }
    else if(pos == 1)
    {
        InsertFirst(head,no);
    }
    else if(pos == (size + 1))
    {
        InserLast(head,no);
    }
    else
    {
        PNODE newn = NULL;
        temp = *head;
        int iCnt = 0;

        newn = (NODE*)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        for(iCnt = 1 ;iCnt < (pos - 1) ;iCnt++)
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

    if(*head == NULL)   //LL is Empty
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

    if(*head == NULL)  //LL is Empty
    {
        return;
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

    InsertFirst(&first ,101);
    InsertFirst(&first ,51);
    InsertFirst(&first ,21);
    InsertFirst(&first ,11);

    InserLast(&first,150);

    InsertAtPos(&first,75,4);

    //DeleteFirst(&first);
    //DeleteLast(&first);

    Display(first);
    iRet = Count(first);
    printf("Number of Nodes are: %d\n",iRet);


    return 0;
}