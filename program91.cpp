//Singly Circular Linked-List

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

class SinglyCLL
{
    private:
        PNODE Head;
        PNODE Tail;

    public:
        SinglyCLL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no ,int pos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int pos);
        void Display();
        int Count();
};

SinglyCLL::SinglyCLL()
{
    Head = NULL;
    Tail = NULL;
}

void SinglyCLL::InsertFirst(int no)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if((Head == NULL) && (Tail == NULL))   //LL is Empty
    {
        Head = newn;
        Tail = newn;
    }
    else           //LL contains atleast one node
    {
        newn->next = Head;
        Head = newn;
    }
    Tail->next = Head;
}

void SinglyCLL::InsertLast(int no)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if((Head == NULL) && (Tail == NULL))   //LL is Empty
    {
        Head = newn;
        Tail = newn;
    }
    else           //LL contains atleast one node
    {
        newn->next = Head;
        Tail->next = newn;
        Tail = newn;
    }
    Tail->next = Head;
}

void SinglyCLL::InsertAtPos(int no ,int pos)
{
    int iSize = Count();

    if((pos < 0) || (pos > iSize+1))
    {
        cout<<"Invalid Position"<<endl;
        return;
    }
    else if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iSize+1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE newn = NULL;
        PNODE temp = NULL;
        temp = Head;
        int iCnt = 0;

        newn = new NODE;
        newn->data = no;
        newn->next = NULL;

        for(iCnt = 1 ;iCnt < pos-1 ;iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }

}

void SinglyCLL::DeleteFirst()
{
    if((Head == NULL) && (Tail == NULL))
    {
        return;
    }
    else if(Head == Tail)
    {
        delete Head;
        Head = NULL;
        Tail = NULL;
    }
    else
    {
        Head = Head->next;
        delete Tail->next;
        Tail->next = Head;
    }
}

void SinglyCLL::DeleteLast()
{
    if((Head == NULL) && (Tail == NULL))
    {
        return;
    }
    else if(Head == Tail)
    {
        delete Head;
        Head = NULL;
        Tail = NULL;
    }
    else
    {
        PNODE temp = NULL;
        temp = Head;

        while(temp->next != Tail)
        {
            temp = temp->next;
        }

        delete temp->next;
        Tail = temp;

        Tail->next = Head;
    }
}

void SinglyCLL::DeleteAtPos(int pos)
{
    int iSize = Count();

    if((pos < 1) || (pos > iSize))
    {
        cout<<"Invalid Position"<<endl;
        return;
    }
    else if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == iSize)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp1 = NULL;
        temp1 = Head;
        int iCnt = 0;

        for(iCnt = 1 ;iCnt < pos-1 ;iCnt++)
        {
            temp1 = temp1->next;
        }

        PNODE temp2 = NULL;
        temp2 = temp1->next;

        temp1->next = temp2->next;

        delete temp2;
    }
}

void SinglyCLL::Display()
{
    PNODE temp = NULL;
    temp = Head;

    if((Head == NULL) && (Tail == NULL))
    {
        return;
    }

    do
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }while(temp != Tail);

    cout<<endl;
}

int SinglyCLL::Count()
{
    int iCnt = 0;
    PNODE temp = NULL;
    temp = Head;

    if((Head == NULL) && (Tail == NULL))
    {
        return 0;
    }

    do
    {
        iCnt++;
        temp = temp->next;
    }while(temp != Tail);

    return iCnt;
}

int main()
{
    SinglyCLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;

    //obj.DeleteFirst();
    //obj.DeleteLast();

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;

    obj.InsertAtPos(75,4);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;

    obj.DeleteAtPos(4);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;

    return 0;
}