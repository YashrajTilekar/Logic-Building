/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdio.h>
#include <stdlib.h>

struct ListNode 
{
    int val;
    struct ListNode *next;
};

void InsertFirst(struct ListNode** head ,int iNo)
{
    struct ListNode* newn = (struct ListNode*)malloc(sizeof(struct ListNode)); 
    newn->val = iNo ;

    if(*head == NULL)
    {
        *head = newn ;
    }
    else
    {
        newn->next = *head ;
        *head = newn ;
    }


}

struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* temp = head ;
    struct ListNode* First = NULL ;

    while(temp != NULL)
    {
        InsertFirst(&First ,temp->val);
        temp = temp->next ;
    }

    return First ;
}