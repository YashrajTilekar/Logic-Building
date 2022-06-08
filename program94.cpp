#include "header94.h"

int main()
{
    DoublyCircularLL dobj;
    int iRet = 0;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);
    dobj.InsertLast(101);
    dobj.InsertLast(151);

    //dobj.DeleteFirst();
    //dobj.DeleteLast();

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are :"<<iRet;


    return 0;
}