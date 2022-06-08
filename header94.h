//Doubly Circular LL

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *previous;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyCircularLL
{
    private:
    PNODE head;
    PNODE tail;
    int iCountNode;

    public:
    DoublyCircularLL();
    void Display();
    int Count();
    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtPos(int iNo,int iPos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};