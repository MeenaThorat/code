#include<stdio.h>
#include<stdlib.h>


#pragma pack(1)

struct node
{
    int data;
    struct node * next;

};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First , PPNODE Last, int no)
{
   PNODE newn = (PNODE)malloc(sizeof(NODE));

   newn->next= no;
   newn->data= NULL;

   if((*First ==NULL)&&(*Last == NULL))// Empty Link List
   {
         *First = *Last = newn;
         (*Last)->next = *First;
   }
   else     // LL contains atleast one node
   {
      newn->next= *First;
      *First = newn;
      (*Last)->next = *First;
   }

}
void InsertLast(PPNODE First , PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

       newn->next= no;
       newn->data= NULL;

      if((*First ==NULL)&&(*Last == NULL))// Empty Link List
      {
            *First = *Last = newn;
            (*Last)->next = *First;
       }
     else     // LL contains atleast one node
      {
          (*Last)->next = newn;
          *Last = newn;
          (*Last)->next = *First;
      }
void Display(PNODE First, PNODE Last)
   {
        printf("Element of link list are :\n");
    
        do
        {
           printf("| %d |->",First->data);
           First = First -> next; 
        } 
    while (First != Last->next);
    
    

    
}
}
int main()
{
  PNODE Head = NULL;
  PNODE Tail = NULL;

  InsertFirst(&Head , &Tail, 51);
  InsertFirst(&Head , &Tail, 21);
  InsertFirst(&Head , &Tail, 11);

  Display(Head, Tail);

  return 0;

}