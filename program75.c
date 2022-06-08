#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

/////////////////////////////////////
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;
/////////////////////////////////////

void InsertFirst(PPNODE head,int no)
{
   /*Allocate Memory For Node
   Initialize that Node
   Check Whether LL is Empty or not

   If LL is Empty then New node is the First Node ,
   so update its address in first pointer through head
   If LL is not empty then store the address of first node in the next
   pointer of new node
   Update first pointer through head
   */

  PNODE newn = NULL;
  newn = (NODE*)malloc(sizeof(NODE));

  newn->data = no;
  newn->next = NULL;

  if(*head == NULL)
  {
    *head = newn;
  }
  else
  {
    newn->next = *head;
    *head = newn;
  }
}

void InsertLast(PPNODE head,int no)
{
   /*Allocate Memory For Node
   Initialize that Node
   Check Whether LL is Empty or not

   If LL is Empty then New node is the First Node ,
   so update its address in first pointer through head

   If LL is not empty then travel till last node of LL
   store address onew node i the next pointer of Last node
   */

  PNODE newn = NULL;
  newn = (NODE*)malloc(sizeof(NODE));

  PNODE temp = NULL; 

  newn->data = no;
  newn->next = NULL;

  if(*head == NULL)
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

void DeleteFirst(PPNODE head)
{
  //IF LL is empty return
  
  //If LL contains atleast one node then
  //store the address of first pointer through head
  //Delete First node
  PNODE temp = NULL; 

  if(*head == NULL)
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
  //If LL is empty return
  //If LL contains one node then delete that node and return
  //If LL contains more than one node then travel till Second Last Node
  //Delete Last node

  PNODE temp = NULL;

  if(*head == NULL)
  {
    return;
  }
  else if((*head)->next == NULL)
  {
    free(*head);
    *head = NULL;
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

void Display(PNODE head)
{
    printf("Elements From Linked-List are:\n");

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

void InsertAtPos(PPNODE head ,int no ,int pos)
{
  //Consider no. of Nodes N

  //If Position is Invalid then return
  //else if Position is 1 then callInsertFirst()
  //else if position is (N+1) then call InsertLast()

  int size = 0 ,iCnt = 0;
  PNODE newn = NULL;
  PNODE temp = NULL;

  size = Count(*head);

  if( (pos < 1) || (pos > (size+1) ) )                //Filter
  {
    printf("Position is Invalid\n");
    return;
  }

  if(pos == 1)
  {
    InsertFirst(head,no);
  }
  else if(pos == (size + 1) )
  {
    InsertLast(head,no);
  }
  else
  { 
   newn = (NODE*)malloc(sizeof(NODE));

   newn->data = no;
   newn->next = NULL;

   temp = *head;

   for(iCnt = 1 ;iCnt < (pos-1) ;iCnt++)
   {
    temp = temp->next;     
   }
   newn->next = temp->next;
   temp->next = newn;
  }

}

void DeleteAtPos(PPNODE head ,int pos)
{
  //Consider no. of Nodes N  [eg. N=4]

  //If Position is Invalid then return  [<1 or >4]
  //else if Position is 1 then call DeleteFirst()
  //else if position is N then call DeleteLast()

  int size = 0 ,iCnt = 0;
  PNODE temp = NULL;
  PNODE tempdelete = NULL;

  size = Count(*head);

  if( (pos < 1) || (pos > size) )                //Filter
  {
    printf("Position is Invalid\n");
    return;
  }

  if(pos == 1)
  {
    DeleteFirst(head);
  }
  else if(pos == size)
  {
    DeleteLast(head);
  }
  else
  { 
   temp = *head;

   for(iCnt = 1 ;iCnt < (pos-1) ;iCnt++)
   {
    temp = temp->next;     
   }

   tempdelete = temp->next;
   temp->next = temp->next->next;
   free(tempdelete);
  }
}

int main()
{
  PNODE first = NULL;
  int iRet = 0;

  InsertFirst(&first,101);
  InsertFirst(&first,51);
  InsertFirst(&first,21);
  InsertFirst(&first,11);

  InsertAtPos(&first,75,3);

  DeleteAtPos(&first,3);

  Display(first);

  iRet = Count(first);
  printf("NUmber of Nodes are :%d\n",iRet);

  InsertFirst(&first,1);

  Display(first);
  iRet = Count(first);
  printf("NUmber of Nodes are :%d\n",iRet);

  InsertLast(&first,111);
  InsertLast(&first,121);

  Display(first);

  DeleteFirst(&first);
  DeleteFirst(&first);
  Display(first);
  iRet = Count(first);
  printf("NUmber of Nodes are :%d\n",iRet);

  DeleteLast(&first);
  Display(first);
  iRet = Count(first);
  printf("NUmber of Nodes are :%d\n",iRet);

  return 0;
}