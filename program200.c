//Binary Search Tree

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data ;
    struct node * Lchild;
    struct node * Rchild;
};

typedef struct node NODE ;
typedef struct node * PNODE ;
typedef struct node ** PPNODE ;

void Insert(PPNODE head , int iNo)
{
    PNODE temp = *head;
    PNODE newn = (NODE*)malloc(sizeof(NODE)) ;
    newn->data = iNo;
    newn->Lchild = NULL;
    newn->Rchild = NULL;


    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        while(1)
        {
            if(iNo > temp->data)  //R
            {
                if(temp->Rchild == NULL)
                {
                    temp->Rchild == newn;
                }
                temp = temp->Rchild;
                break;
            }
            else if(iNo < temp->data)  //L
            {
                if(temp->Lchild == NULL)
                {
                    temp->Lchild == newn;
                }
                temp = temp->Lchild;
                break;
            }
            else if(iNo == temp->data)
            {
                free(newn);
                printf("Data is already there in the BST");
                break;
            }
        }
    }
}

void Inorder(PNODE head)
{
    if(head != NULL)
    {
        Inorder(head->Lchild);
        printf("%d ",head->data);
        Inorder(head->Rchild);
    }
    printf("\n");
}

void Preorder(PNODE head)
{
    if(head != NULL)
    {
        printf("%d ",head->data);
        Preorder(head->Lchild);
        Preorder(head->Rchild);
    }
    printf("\n");
}

void Postorder(PNODE head)
{
    if(head != NULL)
    {
        Postorder(head->Lchild);
        Postorder(head->Rchild);
        printf("%d ",head->data);
    }
    printf("\n");
}

bool Search(PNODE head ,int iNo)
{
    
}

int main()
{
    PNODE First = NULL ;

    Insert(&First , 11);
    Insert(&First , 21);
    Insert(&First , 7);

    printf("Inorder Data\n");
    Inorder(First);

    printf("Postorder Data\n");
    Postorder(First);

    printf("Preorder Data\n");
    Preorder(First);


    return 0 ;
}