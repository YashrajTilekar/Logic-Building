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

class SinglyCircularLL
{
    private:
    PNODE head;
    PNODE tail;

    public:
    SinglyCircularLL();
    void Display();
    int Count();
    void InsertFirst(int no);
    void InserLast(int no);
    void InsertAtPos(int no,int pos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int pos);
};

SinglyCircularLL::SinglyCircularLL()
{
    head = NULL;
    tail = NULL;
}

void SinglyCircularLL::Display()
{
    if((head == NULL) && (tail == NULL))
    {
        return;
    }

    PNODE temp = NULL;
    temp = head;

    do
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }while(temp != head);

    cout<<endl;
}

int SinglyCircularLL::Count()
{
    if((head == NULL) && (tail == NULL))
    {
        return 0;
    }
    
    PNODE temp = NULL;
    temp = head;
    int iCnt = 0;

    do
    {
        iCnt++;
        temp = temp->next;
    }while(temp != head);

    return iCnt;
}

void SinglyCircularLL::InsertFirst(int no)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if((head == NULL) && (tail == NULL))  //LL is Empty
    {
        head = newn;
        tail = newn;
    }
    else                        //LL contains One Node
    {
        newn->next = head;
        head = newn;
        tail->next = head;
    }
}

void SinglyCircularLL::InserLast(int no)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if((head == NULL) && (tail == NULL))  //LL is Empty
    {
        head = newn;
        tail = newn;
    }
    else
    {
        newn->next = head;
        tail->next = newn;
        tail = newn;
    }

}

void SinglyCircularLL::InsertAtPos(int no,int pos)
{
    int iSize = 0;
    iSize = Count();

    if((pos <= 0) || (pos > (iSize+1)))
    {
        cout<<"Invalid Position"<<endl;
        return ;
    }
    else if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == (iSize +1))
    {
        InserLast(no);
    }
    else
    {
        PNODE newn = NULL;
        newn = new NODE;

        newn->data = no;
        newn->next = NULL;

        PNODE temp = NULL;
        temp = head;

        int iCnt = 0;

        for(iCnt = 1 ;iCnt < (pos-1) ;iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }

}

void SinglyCircularLL::DeleteFirst()
{
    PNODE temp = NULL;
    temp = head;

    if((head == NULL) && (tail == NULL))  //LL is Empty
    {
        return;
    }
    else if(head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        tail->next = head->next;
        head = head->next;
        delete temp;
    }
}

void SinglyCircularLL::DeleteLast()
{
    PNODE temp = NULL;
    temp = head;

    if((head == NULL) && (tail == NULL))  //LL is Empty
    {
        return;
    }
    else if(head == tail)
    {
        delete tail;
        head = NULL;
        tail = NULL;
    }
    else
    {
        while((temp->next) != tail)
        {
            temp = temp->next;
        }
        delete temp->next;
        tail = temp;
        tail->next = head;
        
    }
}

void SinglyCircularLL::DeleteAtPos(int pos)
{
    int iSize = 0;
    iSize = Count();

    if((pos < 1) || (pos > iSize))
    {
        cout<<"Invalid Position"<<endl;
        return ;
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
        temp1 = head;

        PNODE temp2 = NULL;
        temp2 = head;

        int iCnt = 0;
        for(iCnt = 1 ;iCnt < (pos-1) ;iCnt++)
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
    sobj.InsertFirst(101);
    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.InserLast(151);

    sobj.InsertAtPos(135,5);

    //sobj.DeleteFirst();
    //sobj.DeleteLast();
    //sobj.DeleteAtPos(4);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;

    return 0;
}