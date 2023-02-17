//Singly Linked List
//Summation of Elements

#include<stdio.h>
#include<stdlib.h>

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

int Summation(PNODE head)
{
    int iSum = 0 ;

    while(head != NULL)
    {
        iSum = iSum + (head->data);
        head = head->next;
    }

    return iSum ;
}

int main()
{
    PNODE First = NULL ;

    InsertFirst(&First ,50);
    InsertFirst(&First ,40);
    InsertFirst(&First ,30);
    InsertFirst(&First ,20);
    InsertFirst(&First ,10);

    Display(First);

    int iRet = Summation(First);
    printf("Addition is :%d",iRet);

    return 0 ;
}