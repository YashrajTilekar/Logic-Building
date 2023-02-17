//Singly Linked List
//Summation of Elements
//Find Max. element
//Accept No. from user nad return freq. of occurance
//Display Summation of factors of each Number
//Display Perfect numbers
//Display Addition of DIGITS of Elements

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

int Maximum(PNODE head)
{
    int iMax = 0 ;

    if(head != NULL)
    {
        iMax = head->data;
    }

    while(head != NULL)
    {
        if( (head->data) > iMax)
        {
            iMax = head->data;
        }
        head = head->next ;
    }

    return iMax ;
}

int Frequency(PNODE head ,int iNo)
{
    int iFreq = 0;

    while(head != NULL)
    {
        if((head->data) == iNo)
        {
            iFreq++;
        }
        head = head->next ;
    }

    return iFreq;
}

void DisplayFactor(PNODE head)
{
    int iNo = 0;
    int iSum = 0;

    while(head != NULL)
    {
        iNo = head->data;

        for(int i = 1 ;i <= iNo/2 ;i++)
        {
            if((iNo%i) == 0)
            {
                iSum = iSum + i ;
            }
        }

        printf("%d : %d\n",head->data,iSum);
        iSum = 0;

        head = head->next ;
    }
}

void DisplayPerfect(PNODE head)
{
    int iNo = 0;
    int iSum = 0;

    while(head != NULL)
    {
        iNo = head->data;

        for(int i = 1 ;i <= iNo/2 ;i++)
        {
            if((iNo%i) == 0)
            {
                iSum = iSum + i ;
            }
        }
        
        if(iSum == iNo)
        {
            printf("Perfect Number is : %d\n",iNo);
        }

        iSum = 0;

        head = head->next ;
    }
}

void SumDigits(PNODE head)
{
    int iDigit = 0;
    int iSum = 0;
    int iNO = 0 ,itemp = 0;

    while(head != NULL)
    {
        iNO = head->data;
        itemp = iNO;

        while(iNO != 0)
        {
            iDigit = iNO%10 ;

            iSum = iSum + iDigit ;

            iNO = iNO/10;
        }

        printf("%d : %d\n",itemp,iSum);
        iSum = 0;

        head = head->next ;
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

    int iRet = Summation(First);
    printf("Addition is :%d\n",iRet);

    iRet = Maximum(First);
    printf("Max. Element is :%d\n",iRet);

    iRet = Frequency(First ,30);
    printf("Frequency is :%d\n",iRet);

    DisplayFactor(First);

    DisplayPerfect(First) ;

    SumDigits(First) ;


    return 0 ;
}