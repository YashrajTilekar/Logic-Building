#include "header94.h"

DoublyCircularLL::DoublyCircularLL()
{
    head = NULL;
    tail = NULL;
    iCountNode = 0;
}

int DoublyCircularLL::Count()
{
    return iCountNode;
}

void  DoublyCircularLL::Display()
{
    if(iCountNode == 0)           //LL is empty
    {
        return;
    }

    PNODE temp = NULL;
    temp = head;

    int iCnt = 0;
    for(iCnt = 1 ;iCnt <= iCountNode ;iCnt++)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<endl;
}

void DoublyCircularLL::InsertFirst(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = iNo;
    newn->previous = NULL;
    newn->next = NULL;

    if(iCountNode == 0)    // LL is empty
    {
        head = newn;
        tail = newn;
        head->next = head;
        tail->previous = tail;
    }
    else
    {
        newn->next = head;
        newn->previous = tail;
        head->previous = newn;
        head = newn;
    }
    head->previous = tail;
    tail->next = head;

    iCountNode++;
}

void DoublyCircularLL::InsertLast(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = iNo;
    newn->previous = NULL;
    newn->next = NULL;

    if(iCountNode == 0)    // LL is empty
    {
        head = newn;
        tail = newn;
        head->next = head;
        tail->previous = tail;
    }
    else
    {
        newn->next = head;
        newn->previous = tail;
        tail->next = newn;
        tail = newn;
    }

    head->previous = tail;
    tail->next = head;

    iCountNode++;
}

void DoublyCircularLL::InsertAtPos(int iNo,int iPos)
{
    if((iPos < 1) || (iPos > (iCountNode + 1)))
    {
        cout<<"Invalid Position"<<endl;
        return;
    }
    else if(iPos = 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos = (iCountNode + 1))
    {
        InsertLast(iNo);
    }
    else
    {
        PNODE newn = NULL;
        newn = new NODE;

        newn->data = iNo;
        newn->previous = NULL;
        newn->next = NULL;

        PNODE temp = NULL;
        temp = head;
        int iCnt = 0;

        for(iCnt = 1 ;iCnt < (iPos-1);iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        newn->previous = temp;
        temp->next->previous = newn;
        temp->next = newn;
        iCountNode++;
    }

    
}

void DoublyCircularLL::DeleteFirst()
{
    if(iCountNode == 0)
    {
        return;
    }
    else if(iCountNode == 1)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        head = head->next;
        delete head->previous;
        head->previous = tail;
        tail->next = head;
    }

    iCountNode--;
}

void DoublyCircularLL::DeleteLast()
{
    if(iCountNode == 0)
    {
        return;
    }
    else if(iCountNode == 1)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        tail = tail->previous;
        delete tail->next;
        tail->next = head;
        head->previous = tail;
    }

    iCountNode--;
}

void DoublyCircularLL::DeleteAtPos(int iPos)
{
    if((iPos < 1) || (iPos > iCountNode))
    {
        cout<<"Invalid Position"<<endl;
        return;
    }
    else if(iPos = 1)
    {
        DeleteFirst();
    }
    else if(iPos = iCountNode)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = NULL;
        temp = head;
        int iCnt = 0;

        for(iCnt = 1 ;iCnt < (iPos-1);iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->previous;
        temp->next->previous = temp;

        iCountNode--;
    }
}