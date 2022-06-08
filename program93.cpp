//Singly Circular LL

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCircularLL
{
    private:
    PNODE head;
    PNODE tail;

    public:
    SinglyCircularLL();
    void Display();
    int Count();
    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtPos(int iNo,int iPos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

SinglyCircularLL::SinglyCircularLL()
{
    head = NULL;
    tail = NULL;
}

void SinglyCircularLL::Display()
{
    PNODE temp = NULL;
    temp = head;

    if((head == NULL) && (tail == NULL))
    {
        return;
    }
    else
    {
        do
        {
            cout<<"|"<<temp->data<<"|->";
            temp = temp->next;
        }while(temp != head);
    }

    cout<<endl;
}

int SinglyCircularLL::Count()
{
    int iCnt = 0;
    PNODE temp = NULL;
    temp = head;

    if((head == NULL) && (tail == NULL))
    {
        return 0;
    }
    else
    {
        do
        {
            iCnt++;
            temp = temp->next;
        }while(temp != head);
    }
    return iCnt;
}

void SinglyCircularLL::InsertFirst(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if((head == NULL) && (tail == NULL))    //LL is Empty
    {
        head = newn;
        tail = newn;
    }
    else
    {
        newn->next = head;
        head = newn;
    }
    tail->next = head;
}

void SinglyCircularLL::InsertLast(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if(head == NULL)    //LL is Empty
    {
        head = newn;
        tail = newn;
    }
    else
    {
        tail->next = newn;
        newn->next = head;
        tail = newn;
    }
    tail->next = head;
}

void SinglyCircularLL::InsertAtPos(int iNo,int iPos)
{
    int iSize = 0;
    iSize = Count();

    if((iPos < 1) || (iPos > (iSize+1)))
    {
        cout<<"Enter Valid Position"<<endl;
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == (iSize + 1))
    {
        InsertLast(iNo);
    }
    else
    {
        PNODE newn = NULL ,temp = NULL;
        newn = new NODE;
        temp  = head;

        newn->data = iNo;
        newn->next = NULL;

        int iCnt = 0;

        for(iCnt = 1 ;iCnt < (iPos - 1) ;iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void SinglyCircularLL::DeleteFirst()
{
    if((head == NULL) && (tail == NULL))    //LL is empty
    {
        return;
    }      
    else if(head == tail)       //LL contains only one node
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        PNODE temp = NULL;
        temp = head;

        head = head->next;
        delete temp;
        tail->next = head;
    }
}

void SinglyCircularLL::DeleteLast()
{
    if((head == NULL) && (tail == NULL))    //LL is empty
    {
        return;
    }      
    else if(head == tail)       //LL contains only one node
    {
        delete tail;
        head = NULL;
        tail = NULL;
    }
    else
    {
        PNODE temp = NULL;
        temp = head;

        int iCnt = 0;
        int iSize = 0;
        iSize = Count();

        for(iCnt = 1;iCnt < (iSize - 1) ;iCnt++)
        {
            temp = temp->next;
        }
        
        delete temp->next;
        temp->next = head;
        tail = temp;
    }
}

void SinglyCircularLL::DeleteAtPos(int iPos)
{
    int iSize = 0;
    iSize = Count();

    if((iPos < 1) || (iPos > iSize))
    {
        cout<<"Enter Valid Position"<<endl;
        return;
    }
    else if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iSize)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp1 = NULL ,temp2 = NULL ;
        temp1  = head;

        int iCnt = 0;

        for(iCnt = 1 ;iCnt < (iPos - 1) ;iCnt++)
        {
            temp1 = temp1->next;
        }

        temp2 = temp1->next;
        temp1->next = temp1->next->next;
        delete temp2;
    }
}

int main()
{
    int iRet = 0;

    SinglyCircularLL sobj;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);
    sobj.InsertLast(101);
    sobj.InsertLast(155);
    sobj.InsertAtPos(70,4);

    //sobj.DeleteFirst();
    //sobj.DeleteLast();
    //sobj.DeleteAtPos(3);


    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;

    return 0;
}